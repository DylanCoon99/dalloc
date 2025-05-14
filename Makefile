CC = gcc
CFLAGS = -Wall -Wextra -std=c99
SRC = src/main.c src/allocator.c src/block.c src/util.c
OBJ = $(SRC:.c=.o)
INCLUDE = -Iinclude

all: allocator

allocator: $(OBJ) src/main.c
	$(CC) $(CFLAGS) $(INCLUDE) -o allocator $(OBJ) src/main.c

clean:
	rm -f src/*.o allocator