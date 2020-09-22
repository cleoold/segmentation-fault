# segmentation-fault

This repository lists the ways to segmentation-faulting the interpreters. It does so by writting a native C procedure that errors, then importing them into the runtime.

On the surface it crashes programs, but this repo is really some notes about how to call C interfaces in other languages.

These are currently only tested on Linux (amd64) (I mean the behavior that the interpreter crashes).
