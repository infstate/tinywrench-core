import ctypes

# Load the shared library
lib = ctypes.CDLL("./build/lib/libsystem_utils.so")

# Define function signature
lib.install_software.argtypes = [ctypes.c_char_p]
lib.install_software.restype = None

# Install a package (e.g., curl)
lib.install_software(b"curl")

