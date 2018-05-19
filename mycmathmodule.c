#include <Python.h>

static PyObject *
add(PyObject *self, PyObject *args)
{
  long a, b;
  long result;
  if (!PyArg_ParseTuple(args, "ll", &a, &b)) {
    return NULL;
  }
  result = a + b;
  return PyLong_FromLong(result);
}


static PyMethodDef methods[] = {
  {"add", (PyCFunction)add, METH_VARARGS, "add function"},
  {NULL, NULL, 0, NULL}
};

static struct PyModuleDef mod = {
  PyModuleDef_HEAD_INIT,
  "_mycmath",
  NULL,
  -1,
  methods
};

PyMODINIT_FUNC
PyInit__mycmath(void)
{
  return PyModule_Create(&mod);
}
