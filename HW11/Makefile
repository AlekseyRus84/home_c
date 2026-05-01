all:prog

prog: main.o temp_functions.o
	gcc -o prog main.o temp_functions.o

main.o: main.c temp_functions.h
	$(CC) $(CFLAGS) -c main.c

temp_api.o: temp_functions.c temp_functions.h
	$(CC) $(CFLAGS) -c temp_functions.c


clean:
	del /f main.o temp_functions.o prog.exe