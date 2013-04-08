LD=gcc
LDFLAGS=-static
LIBS=-lcrypto -ldl -lrt -lpthread

all: adb libadb

libadb:
	mv adbexec.o adbexec.obj
	gcc -o libadb.so *.o -shared -Wl,-soname,libadb.so $(LIBS)
	mv adbexec.obj adbexec.o

adb:
	mv libadb.o libadb.obj
	$(LD) -o $@ $(LDFLAGS) *.o $(LIBS)
	mv libadb.obj libadb.o

clean:
	rm adb *.o *.so
