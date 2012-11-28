LD=gcc
LDFLAGS=-static
LIBS=-lcrypto -ldl -lrt -lpthread

all: adb

adb:
	mv ../src/libadb/*.o .
	mv ../src/libcutils/*.o .
	mv ../src/libzipfile/*.o .
	mv ../src/zlib/*.o .
	$(LD) -o $@ $(LDFLAGS) *.o $(LIBS)

clean:
	rm adb *.o
