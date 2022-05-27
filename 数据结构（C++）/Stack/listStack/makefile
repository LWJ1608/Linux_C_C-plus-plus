main:main.o
	g++ main.o -o main
main.o:main.cpp
	g++ -c main.cpp -o main.o -std=c++11 

.PHONY : clean
clean:
	rm -rf *.o main