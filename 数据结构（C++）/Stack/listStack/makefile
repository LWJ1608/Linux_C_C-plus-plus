ELF=main
CC=g++ -g -std=c++11
SRC=$(shell find -name "*.cpp")
objects=$(SRC:.c=.o)
$(ELF):$(objects) 
$(objects):

.PHONY:clean
clean:
	-rm -rf *.o main