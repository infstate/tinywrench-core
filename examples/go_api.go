package main

/*
#cgo LDFLAGS: -L../build/lib -lsystem_utils
#include "../include/api.h"
*/
import "C"

func main() {
    C.install_software(C.CString("curl"))
}

