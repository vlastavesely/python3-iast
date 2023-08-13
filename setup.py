#!/usr/bin/python3
# vim:set ts=4

from distutils.core import setup, Extension

iast = Extension('iast', sources=['iast.c'], libraries=['iast'])

setup(name='IAST', version='1.0', ext_modules=[iast])
