list: list.h api_list.o list.c
	gcc -o list list.c api_list.o

api_list.o: api_list.c
	gcc -c api_list.c

clean:
	rm -rf list api_list.o

