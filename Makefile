DISTDIR = /usr/lib/python3/dist-packages
LIBNAME = iast.cpython-39-x86_64-linux-gnu.so

all:
	python3 setup.py build

install:
	install -m 0755 build/lib.linux-x86_64-3.9/$(LIBNAME) $(DISTDIR)

uninstall:
	rm -f $(DISTDIR)/$(LIBNAME)

clean:
	rm -rf build
