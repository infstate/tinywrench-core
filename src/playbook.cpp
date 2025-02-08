#include "yaml.hpp"
#include "playbook.hpp"
#include <iostream>
#include <string>

namespace PLAYBOOK {
    // Constructor
    Playbook::Playbook(const std::string& filepath) {
        name = parse(filepath);  // Store the parsed name in the member variable
    }

    // Destructor (if needed)
    // Playbook::~Playbook() {
    //     // Cleanup if necessary
    // }

    // Parse method
    const std::string Playbook::parse(const std::string& filepath) {
        YAML::Yaml coolYamlObject(filepath);
        // Ensure that the YAML structure matches your expectations
        return coolYamlObject["object"]["name"].getData<std::string>();
    }

    // Getter for name
    const std::string Playbook::getName() const {
        return name;  // Return the stored name
    }
}