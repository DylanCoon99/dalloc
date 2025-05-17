#include "../include/block.h"
#include "../include/util.h"

/*
Contains helper functions for managing individual memory blocks, including splitting and 
tracking allocated/free blocks.
*/


extern struct Allocator memory_allocator;


void split_block(struct Block* block, size_t size) {

	/*
		Split block: first block will be n = size bytes; second block will be block.size - size - (header size)
	*/
	size_t total_size = block->size;
	
	// create a new block object
	

	// go back and subtract the size of the header
	struct Block* new_block = (struct Block*)((char*)block + sizeof(struct Block) + size);

	new_block->size = total_size - size;
	new_block->next = block->next;
	new_block->free = 1;


	block->next = new_block;
	block->size = size;

};



struct Block* find_free_block(size_t size){

	switch (memory_allocator.alloc_policy) {
	case FIRST_FIT:
		struct Block* ptr = first_fit(size);
		return ptr;
	case BEST_FIT:
		break;
	case WORST_FIT:
		break;
	}
	return NULL;
};



void merge_adjacent_blocks();