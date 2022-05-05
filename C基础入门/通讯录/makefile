test:test.o contact.o
	gcc -o test test.o contact.o -g

test.o: test.c contact.h
	gcc -c test.c -g

contact.o:contact.c contact.h
	gcc -c contact.c -g

clean:
	rm -rf *.o test;