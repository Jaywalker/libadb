all:
	make -C src
	mv src/adb/*.o build/
	mv src/libadb/*.o build/
	mv src/libcutils/*.o build/
	mv src/libzipfile/*.o build/
	mv src/zlib/*.o build/
	make -C build

clean:
	make -C src clean
	make -C build clean
