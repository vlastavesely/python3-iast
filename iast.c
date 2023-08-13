#include <Python.h>

static PyObject *iast(PyObject* self, PyObject* args)
{
	Py_RETURN_NONE;
}

static PyObject *deva(PyObject* self, PyObject* args)
{
	Py_RETURN_NONE;
}

static PyMethodDef module_methods[] =
{
	{"iast", iast, METH_VARARGS, "Convert Devanagari to IAST."},
	{"deva", deva, METH_VARARGS, "Convert IAST to Devanagari."},
	{NULL, NULL, 0, NULL}
};

static struct PyModuleDef module =
{
	PyModuleDef_HEAD_INIT,
	"iast",
	NULL,
	-1,
	module_methods
};

PyMODINIT_FUNC PyInit_iast(void)
{
	return PyModule_Create(&module);
}
