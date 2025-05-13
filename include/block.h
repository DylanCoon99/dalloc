#ifndef BLOCK_H
#define BLOCK_H

#include <stddef.h>  // For size_t

// Structure representing a memory block
typedef struct {
    size_t size;         // Size of the block
    struct Block* next;  // Pointer to the next free block
    int free;            // Whether the block is free (1) or allocated (0)
} Block;

// Function declarations
void split_block(Block* block, size_t size);
Block* find_free_block(size_t size);
void merge_adjacent_blocks();

#endif // BLOCK_H
