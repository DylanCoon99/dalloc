#include <stdio.h>
#include <stdlib.h>
#include <stddef.h>
#include "../include/block.h"


/*
Contains helper functions for managing individual memory blocks, including splitting and 
tracking allocated/free blocks.
*/

void split_block(Block* block, size_t size);



Block* find_free_block(size_t size);



void merge_adjacent_blocks();