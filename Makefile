CC=g++
DEPS=main.cxx
CFLAGS=-Wall

all: $(DEPS)
		$(CC) $(CFLAGS) $(DEPS) -o sysutil

install:
	cp sysutil /usr/bin
	chmod +x /usr/bin/sysutil

clean:
	rm -R *.o

uninstall:
	rm -R /usr/bin/sysutil
