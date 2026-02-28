CC = gcc
CFLAGS = -Wall -Wextra

SRC = main.c _number.c
OBJ = $(SRC:.c=.o)

main: $(OBJ)
	$(CC) $(OBJ) -o main

%.o: %.c
	$(CC) $(CFLAGS) -c $<

clean:
	rm -f *.o main