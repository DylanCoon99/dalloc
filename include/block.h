#ifndef BLOCK_H
#define BLOCK_H

#include <stddef.h>  // For size_t
#include <stdio.h>
#include <stdlib.h>


struct Block {
    size_t size;         // Size of the block
    struct Block* next;  // Pointer to the next free block
    int free;            // Whether the block is free (1) or allocated (0)
    char data[1]         // marks the start of user data
};


// Function declarations
void split_block(struct Block* block, size_t size);
struct Block* find_free_block(size_t size);
void coalesce();

#endif // BLOCK_H
