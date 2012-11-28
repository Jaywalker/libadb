all:
	make -C src
	make -C build

clean:
	make -C src clean
	make -C build clean
