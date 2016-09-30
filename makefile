myString: myStrings.c
	gcc -o myStrings.out myStrings.c

run: myStrings.out
	./myStrings.out

clean:
	rm *~
