# test:test.o contact.o
# 	gcc -o test test.o contact.o -g

# test.o: test.c contact.h
# 	gcc -c test.c -g

# contact.o:contact.c contact.h
# 	gcc -c contact.c -g




ser:ser.o
	gcc -o ser ser.o -g -lpthread

ser.o: ser.c utili.h
	gcc -c ser.c -g -lpthread

clean:
	rm -rf *.o test;