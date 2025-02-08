#include <iostream>
#include <cstdlib>
#include "system_detector.h"

// Convert std::string to C-style string
const char* detect_os() {
    static std::string os;
    #ifdef _WIN32
        os = "Windows";
    #elif __APPLE__
        os = "macOS";
    #elif __linux__
        os = "Linux";
    #else
        os = "Unknown";
    #endif
    return os.c_str();  // Return a C-style string
}

const char* detect_package_manager() {
    static std::string package_manager;
    std::string os = detect_os();

    if (os == "Linux") {
        if (system("which apt > /dev/null 2>&1") == 0) package_manager = "apt";
        else if (system("which yum > /dev/null 2>&1") == 0) package_manager = "yum";
        else if (system("which pacman > /dev/null 2>&1") == 0) package_manager = "pacman";
    } else if (os == "macOS") {
        if (system("which brew > /dev/null 2>&1") == 0) package_manager = "brew";
    } else if (os == "Windows") {
        if (system("where choco > nul 2>&1") == 0) package_manager = "choco";
        else if (system("where winget > nul 2>&1") == 0) package_manager = "winget";
        else if (system("where scoop > nul 2>&1") == 0) package_manager = "scoop";
    } else {
        package_manager = "Unknown";
    }

    return package_manager.c_str();
}

void print_system_info() {
    std::cout << "Operating System: " << detect_os() << std::endl;
    std::cout << "Package Manager: " << detect_package_manager() << std::endl;
}

