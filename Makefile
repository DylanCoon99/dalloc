CC = gcc
CFLAGS = -Wall -Wextra -std=gnu99
DEBUG_FLAGS = -g # Debug symbol for gdb
SRC = src/allocator.c src/block.c src/util.c tests/allocator_test.c
OBJ = $(SRC:.c=.o)
INCLUDE = -Iinclude

all: allocator

allocator: $(OBJ) src/main.c
	$(CC) $(CFLAGS) $(INCLUDE) -o allocator $(OBJ) src/main.c

debug: CFLAGS += $(DEBUG_FLAGS)
debug: allocator

clean:
	rm -f $(OBJ) allocator