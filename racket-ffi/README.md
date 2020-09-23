# SIGSEGV in Racket

The racket ffi documentation can be found [here](https://docs.racket-lang.org/foreign/index.html).

Making C code run in Racket does not require me to modify my C code or use their API adapters in C. Write a shared C module like normal, then use the ffi APIs on Racket'side to adapt the C code.

Directory structure:
*   `crashme/crashme.c` the C source file that provides function
*   `crashme/crashme.rkt` the Racket library that imports the above C symbols, then exports them in Racket form
*   `demo.rkt` a demo that requires this function and runs it

## Trying
first navigate to `crashme` folder and issue
```sh
$ make
```
which builds the shared library. (For Windows, eg. VS, make sure to turn the `.c` file into a `dll` with the same name)

then try the demo (example output):
```sh
$ racket7.7 demo.rkt
Sorry. I crashed.
SIGSEGV MAPERR si_code 1 fault on addr (nil)
Aborted (core dumped)
$
```
