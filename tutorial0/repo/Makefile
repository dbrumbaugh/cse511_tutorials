CFLAGS = -Iinclude -Llib
TARGET = libmine.a

.PHONY: lib
lib: $(TARGET)

clean:
	rm -rf build lib bin

.PHONY: build
build:
	mkdir -p build
	mkdir -p lib
	mkdir -p bin

${TARGET}: build/outputmod.o build/othermod.o
	ar rcs lib/$(TARGET) build/othermod.o build/outputmod.o

bin/helloworld: $(TARGET)
	gcc $(CFLAGS) src/helloworld.c -lmine -o bin/helloworld

build/outputmod.o: build
	gcc $(CFLAGS) -c src/outputmod.c -o build/outputmod.o

build/othermod.o: build
	gcc $(CFLAGS) -c src/othermod.c -o build/othermod.o

