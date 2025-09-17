PYTHON = python3

DISTDIR = /usr/lib/python3/dist-packages

all:
	$(PYTHON) -m build --outdir dist

install:
	DEB_PYTHON_INSTALL_LAYOUT=deb $(PYTHON) -m installer --destdir=$(DESTDIR) dist/*.whl

uninstall:
	$(RM) -r $(DISTDIR)/iast-1.0.egg-info $(DISTDIR)/iast.cpython-*.so

clean:
	$(RM) -r dist iast.egg-info
