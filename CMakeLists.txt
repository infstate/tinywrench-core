cmake_minimum_required(VERSION 3.10)
project(SystemUtils)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED True)

# Define output directory for shared libraries
set(CMAKE_LIBRARY_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib)

# Include directories
include_directories(include)

# Define the library sources
set(LIBRARY_SOURCES
    src/executor.cpp
    src/llm.cpp
    src/playbook.cpp
    src/yaml.cpp
    src/system_detector.cpp
    src/software_installer.cpp
    src/user_manager.cpp
)

# Create the shared library
add_library(system_utils SHARED ${LIBRARY_SOURCES})

# Install rules (optional)
install(TARGETS system_utils LIBRARY DESTINATION lib)

# Define output directory for compiled binaries
set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/bin)

# Define the executable target
add_executable(system_utils_bin src/main.cpp)

# Link the shared library to the executable
target_link_libraries(system_utils_bin PRIVATE system_utils)