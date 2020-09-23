# SIGSEGV in Python (C extension)

The C extension API documentation can be found [here](https://docs.python.org/3/extending/extending.html).

This builds a C-based Python module by using the Python API in my C code. Then I can import the library to use the function.

Directory structure:
*   `crashme/crashme.c` the `crashme` module source file
*   `crashme/setup.py` the module installer
*   `demo.py` a demo that requires this module and runs the function

## Trying

The dev library is needed, if you are on Ubuntu, following would work:
```sh
% apt install python3.8-dev
```
If you are on Windows, no need to install it separately (as it is already installed).

First navigate to `crashme` folder, then build the module in place
```sh
$ cd crashme
$ python3.8 setup.py build_ext --inplace
```
For example, `crashme.cpython-38-x86_64-linux-gnu.so` could be generated.

Go to the parent folder and run the demo, example output:
```sh
$ python3.8 demo.py
Sorry. I crashed.
Segmentation fault (core dumped)
$
```
