#ifndef SOFTWARE_INSTALLER_H
#define SOFTWARE_INSTALLER_H

#ifdef __cplusplus
extern "C" {  // Ensure compatibility with Python, Rust, Go, etc.
#endif

namespace Playbook {
void install_software(const char* package_name);
}
#ifdef __cplusplus
}
#endif

#endif  // SOFTWARE_INSTALLER_H

