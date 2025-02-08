#include <cstdlib>
#include <iostream>

// Function to run a system command
void run_command(const std::string& command) {
    int result = system(command.c_str());
    if (result != 0) {
        std::cerr << "Error executing command: " << command << std::endl;
    }
}

