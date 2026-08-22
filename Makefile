CC = gcc
CFLAGS = -Wall -Wextra

apc : main.o Make_list.o List.o 
	$(CC) $(CFLAGS) main.o Make_list.o List.o -o apc
main.o : main.c APC.h Make_List.h 
	$(CC) $(CFLAGS) -c main.c 
Make_list.o : Make_list.c APC.h Make_List.h
	$(CC) $(CFLAGS) -c Make_list.c
List.o : List.c APC.h
	$(CC) $(CFLAGS) -c List.c

clean :
	rm -f *.o apc 
