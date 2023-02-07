CC=gcc
CFLAGS=-I.
DEPS = common.h debug.h

%.o: %.c $(DEPS)
	$(CC) -c -o $@ $< $(CFLAGS)

all: main.o memory.o chunk.o debug.o value.o vm.o scanner.o compiler.o
	$(CC) -o main main.o memory.o chunk.o debug.o value.o vm.o scanner.o compiler.o
	rm -f *.o

clean:
	rm -f *.o
