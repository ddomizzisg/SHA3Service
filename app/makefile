CC=gcc
THREAD=-lcrypto 
CFLAGS=-Wall -ggdb -O2 -I.
LDFLAGS=

.PHONY : all test clean 

hashTable: hashTable.c  sha3.o
	$(CC) -o hashTable hashTable.c sha3.o $(THREAD)

clean: 
	rm *.o 
	rm hashTable