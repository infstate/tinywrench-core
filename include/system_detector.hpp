#ifndef SYSTEM_DETECTOR_H
#define SYSTEM_DETECTOR_H

#include <string>

#ifdef __cplusplus
extern "C" {  // Prevents C++ name mangling for cross-language compatibility
#endif

const char* detect_os();
const char* detect_package_manager();
void print_system_info();

#ifdef __cplusplus
}
#endif

#endif  // SYSTEM_DETECTOR_H

