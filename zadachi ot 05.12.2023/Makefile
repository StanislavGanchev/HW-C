help.out: main.c mystrings.help
	gcc main.c mystrings.o -o help.out

mystrings.o: mystrings.c mystrings.help
	gcc -c mystrings.c -o mystrings.out

clean:
	rm -f help.out mystrings.o