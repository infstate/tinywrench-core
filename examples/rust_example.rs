extern crate libc;
use std::ffi::CString;

extern "C" {
    fn install_software(package: *const libc::c_char);
}

fn main() {
    let package = CString::new("curl").unwrap();
    unsafe { install_software(package.as_ptr()) };
}

