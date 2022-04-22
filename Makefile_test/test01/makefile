ELF=main
CC=gcc -g
SRC=$(shell find -name "*.c")
objects=$(SRC:.c=.o)
$(ELF):$(objects) 
$(objects):

.PHONY:clean
clean:
	rm -rf *.o main
 
