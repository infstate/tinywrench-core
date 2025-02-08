// #include <iostream>
// #include "playbook.hpp"  // Include the header file

// int main() {
//     // Create a Playbook object
//     PLAYBOOK::Playbook myPlaybook("example.yaml");

//     // Use the getName method to retrieve the name
//     std::cout << "Playbook name: " << myPlaybook.getName() << std::endl;

//     // Optionally, you can also call the parse method if you want to see the contents of the file
//     try {
//         std::string content = myPlaybook.parse("example.yaml");
//         std::cout << "Playbook content: " << content << std::endl;
//     } catch (const std::exception& e) {
//         std::cerr << "Error: " << e.what() << std::endl;
//     }

//     return 0;
// }

#include "yaml.hpp"
#include <iostream>

int main() {
    YAML::Yaml coolYamlObject("/home/toggle/example.yaml");
    const std::string name = coolYamlObject["object"]["name"].getData<std::string>();
    std::cout << name << std::endl;
}