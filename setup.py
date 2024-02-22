#!/usr/bin/python3
# vim:set ts=4

from setuptools import setup, Extension

iast = Extension('iast', sources=['iast.c'], libraries=['iast'])

setup(name='iast', version='1.0', ext_modules=[iast])
