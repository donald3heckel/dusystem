CC=g++
DEPS=main.cxx
CFLAGS=-Wall
EXECUTABLE=sysutil

all: $(DEPS)
		$(CC) $(CFLAGS) $(DEPS) -o $(EXECUTABLE)

install: $(EXECUTABLE)
	cp sysutil /usr/bin
	chmod +x /usr/bin/sysutil

clean:
	rm -R *.o

uninstall:
	rm -R /usr/bin/sysutil
