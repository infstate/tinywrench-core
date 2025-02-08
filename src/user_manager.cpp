#include <cstdlib>
#include <string>
#include <iostream>

// Function to add a user with a specific shell and optional group
void add_user(const std::string& username, const std::string& shell, const std::string& groups) {
    std::string command = "sudo useradd -m -s " + shell + " " + username;
    if (!groups.empty()) {
        command += " -G " + groups;
    }
    system(command.c_str());
}

// Function to remove a user
void remove_user(const std::string& username) {
    std::string command = "sudo userdel -r " + username;
    system(command.c_str());
}

// Function to modify the shell of an existing user
void modify_user_shell(const std::string& username, const std::string& new_shell) {
    std::string command = "sudo usermod -s " + new_shell + " " + username;
    system(command.c_str());
}

