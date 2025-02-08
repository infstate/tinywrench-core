#include <iostream>
#include "system_detector.h"
#include "software_installer.h"

int main() {
    print_system_info();  // Print detected OS and package manager
    install_software("curl");  // Try installing curl
    return 0;
}

