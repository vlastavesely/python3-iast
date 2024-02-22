PYTHON = python3

DISTDIR = /usr/lib/python3/dist-packages

all:
	$(PYTHON) setup.py bdist_egg

install:
	$(PYTHON) setup.py install --skip-build --root=$(prefix) --install-layout=deb

uninstall:
	$(RM) -r $(DISTDIR)/iast-1.0.egg-info $(DISTDIR)/iast.cpython-*.so

clean:
	$(RM) -r build dist iast.egg-info
