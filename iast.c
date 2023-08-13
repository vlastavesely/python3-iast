#include <Python.h>
#include <iast/transliteration.h>

static PyObject *iast(PyObject* self, PyObject* args)
{
	const char *in;
	char *translit;
	PyObject *ret;

	if (PyArg_ParseTuple(args, "s", &in) == 0) {
		return NULL;
	}

	if (transliterate_devanagari_to_latin(in, &translit) != 0) {
		return NULL;
	}

	ret = PyUnicode_FromString(translit);
	free(translit);

	return ret;
}

static PyObject *deva(PyObject* self, PyObject* args)
{
	const char *in;
	char *translit;
	PyObject *ret;

	if (PyArg_ParseTuple(args, "s", &in) == 0) {
		return NULL;
	}

	if (transliterate_latin_to_devanagari(in, &translit) != 0) {
		return NULL;
	}

	ret = PyUnicode_FromString(translit);
	free(translit);

	return ret;
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
