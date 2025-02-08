cmake_minimum_required(VERSION 3.10)
project(SystemUtils)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED True)

# Define output directory for shared libraries
set(CMAKE_LIBRARY_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib)

# Include directories
include_directories(include)

# Define the library sources
set(SOURCES
    src/executor.cpp
    src/llm.cpp
    src/user_manager.cpp
    src/system_detector.cpp
    src/software_installer.cpp
)
# Create the shared library
add_library(system_utils SHARED ${SOURCES})

# Install rules (optional)
install(TARGETS system_utils LIBRARY DESTINATION lib)

# Define output directory for compiled binaries
set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/bin)

