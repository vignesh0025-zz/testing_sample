all: test.c app.o
	gcc app.o test.c -o test -I./inc -I../inc

app.o: ../app.c 
	gcc -c ../app.c -I./inc -I../inc

clean:
	rm -rf *.o
	rm -rf test

