#include "software_installer.hpp"
#include <iostream>
#include <cstdlib>

void install_software(const char* package_name) {
    std::string command;
    
    #ifdef __linux__
        if (system("which apt > /dev/null 2>&1") == 0) 
            command = "sudo apt install -y " + std::string(package_name);
        else if (system("which yum > /dev/null 2>&1") == 0) 
            command = "sudo yum install -y " + std::string(package_name);
        else if (system("which pacman > /dev/null 2>&1") == 0) 
            command = "sudo pacman -S --noconfirm " + std::string(package_name);
    #elif __APPLE__
        if (system("which brew > /dev/null 2>&1") == 0) 
            command = "brew install " + std::string(package_name);
    #elif _WIN32
        if (system("where winget > nul 2>&1") == 0) 
            command = "winget install -e --id " + std::string(package_name);
        else if (system("where choco > nul 2>&1") == 0) 
            command = "choco install -y " + std::string(package_name);
    #endif

    if (!command.empty()) {
        std::cout << "Executing: " << command << std::endl;
        system(command.c_str());
    } else {
        std::cerr << "No suitable package manager found." << std::endl;
    }
}

