import ctypes
import pathlib

libfile = ctypes.CDLL(
    # relative to this module file
    str(pathlib.Path(__file__).parent.absolute() / 'libcrashme.so')
)

c_crash_me = libfile.crash_me
c_crash_me.argtypes = []

def crash_me() -> None:
    c_crash_me()

__all__ = [ 'crash_me' ]
