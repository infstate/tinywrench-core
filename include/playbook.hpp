#pragma once
#ifndef PLAYBOOK_PARSER
#define PLAYBOOK_PARSER

#ifdef __cplusplus
extern "C" {  // Ensure compatibility with Python, Rust, Go, etc.
#endif

namespace PLAYBOOK {
    class Playbook {
        std::string name;
    public:
        Playbook(const std::string& filepath);
        const std::string parse(const std::string& filepath);
        const std::string getName() const;
    };

}

#ifdef __cplusplus
}
#endif

#endif  // SOFTWARE_INSTALLER_H

