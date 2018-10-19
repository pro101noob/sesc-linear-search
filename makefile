run: secs
	./secs

secs: secs.c
	gcc -Wall -std=c11 secs.c -o secs

build: secs
