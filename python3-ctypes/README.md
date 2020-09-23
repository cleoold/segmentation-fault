# SIGSEGV in Python (Ctypes)

The ctypes documentation can be found [here](https://docs.python.org/3/library/ctypes.html).

Making C code run in Python does not require me to modify my C code or use their API adapters in C if using ctypes. Write a shared C module like normal, then use the ctypes APIs on Python'side to adapt the C code.

Directory structure:
*   `crashme/crashme.c` the C source file that provides function
*   `crashme/__init__.py` the Python library that imports the above C symbols, then exports them in Python form
*   `demo.py` a demo that requires this function and runs it

## Trying
first navigate to `crashme` folder and issue
```sh
$ make
```
which builds the shared library. (For Windows, eg. VS, make sure to turn the `.c` file into a `dll` with the same name)

then try the demo (example output):
```sh
$ python3.8 demo.py
Sorry. I crashed.
Segmentation fault (core dumped)
$
```
