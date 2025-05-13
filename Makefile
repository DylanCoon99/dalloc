CC = gcc
CFLAGS = -Wall -Wextra -std=c99
SRC = src/allocator.c src/block.c src/coalescing.c src/utils.c
OBJ = $(SRC:.c=.o)
TESTS = tests/allocator_test.c tests/coalescing_test.c
INCLUDE = -Iinclude

all: allocator

allocator: $(OBJ) src/main.c
    $(CC) $(CFLAGS) $(INCLUDE) -o allocator $(OBJ) src/main.c

test: $(OBJ)
    $(CC) $(CFLAGS) $(INCLUDE) -o tests/test $(OBJ) $(TESTS)

clean:
    rm -f src/*.o allocator tests/test
