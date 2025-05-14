#include "../include/block.h"
#include "../include/util.h"

/*
Contains helper functions for managing individual memory blocks, including splitting and 
tracking allocated/free blocks.
*/


extern struct Allocator memory_allocator;


void split_block(Block* block, size_t size);



Block* find_free_block(size_t size){

	switch (memory_allocator.alloc_policy) {
	case FIRST_FIT:
		Block* ptr = first_fit(size);
		return ptr;
	case BEST_FIT:
		break;
	case WORST_FIT:
		break;
	}
	return NULL;
};



void merge_adjacent_blocks();