#include <Python.h>

#include "../../common/crash_impl.h"

static PyObject *
method_crash_me(PyObject *self, PyObject *args)
{
    (void)self, (void)args;
    PySys_WriteStdout("%s\n", "Sorry. I crashed.");
    crash_impl();
    PySys_WriteStdout("%s\n", "OK. You win.");
    Py_RETURN_NONE;
}

static PyMethodDef crashme_methods[] = {
    { "crash_me", method_crash_me, METH_NOARGS, "crash Python interpreter" },
    { NULL, NULL, 0, NULL }
};

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
static struct PyModuleDef crashme_module = {
    PyModuleDef_HEAD_INIT,
    "crashme",
    "Python interpreter crasher",
    -1,
    crashme_methods,
};
#pragma GCC diagnostic pop

// on Windows, pyd is built -- not dll
PyMODINIT_FUNC
PyInit_crashme()
{
    PyObject *module = PyModule_Create(&crashme_module);
    return module;
}
