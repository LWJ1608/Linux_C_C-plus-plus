ELF=main
CC=gcc -g -std=c++11
SRC=$(shell find -name "*.c")
objects=$(SRC:.c=.o)
$(ELF):$(objects) 
$(objects):

.PHONY:clean
clean:
	-rm -rf *.o main