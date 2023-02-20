CC=gcc
CFLAGS=-I. -g3
DEPS = common.h debug.h chunk.h object.h

%.o: %.c $(DEPS)
	$(CC) -c -o $@ $< $(CFLAGS)

all: main.o memory.o chunk.o debug.o value.o vm.o scanner.o compiler.o object.o
	$(CC) -o main main.o memory.o chunk.o debug.o value.o vm.o scanner.o compiler.o object.o
	rm -f *.o

clean:
	rm -f *.o
