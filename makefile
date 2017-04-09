all: app.o
	gcc app.o main.c -o main -I./inc

app.o: app.c
	gcc -c app.c -I./inc

clean:
	rm -rf *.o
	rm -rf main
