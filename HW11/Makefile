all:prog

prog: main.o temp_api.o
	gcc -o prog main.o temp_api.o

main.o: main.c temp_api.h
	$(CC) $(CFLAGS) -c main.c

temp_api.o: temp_api.c temp_api.h
	$(CC) $(CFLAGS) -c temp_api.c


clean:
	del /f main.o temp_api.o prog.exe