#include "../include/allocator.h"
#include "../include/block.h"




struct Allocator memory_allocator;

const size_t ALLOCATOR_SIZE = 4096;
const Alloc_Policy POLICY = FIRST_FIT;

/*
Implements memory allocation strategies (first-fit, best-fit, worst-fit). It contains functions 
that manage memory requests, find appropriate blocks, and allocate memory.
*/


__attribute__((constructor)) void init_constructor() {
	memory_allocator = init_allocator(ALLOCATOR_SIZE, POLICY);
	printf("Initializing allocator of size %zu and policy %d\n", memory_allocator.size, memory_allocator.alloc_policy);
}


// Initializes the allocator with a given size
struct Allocator init_allocator(size_t size, Alloc_Policy alloc_policy) {

	struct Allocator allocator;

	struct Block *base_block;

	base_block = mmap(NULL, size, PROT_READ | PROT_WRITE, MAP_PRIVATE , -1, 0);


	allocator.size = size;
	allocator.free_list = base_block;
	allocator.alloc_policy = alloc_policy;

	return allocator;


}

// Allocates memory using the selected strategy (first-fit, best-fit, worst-fit)
void* dalloc(size_t size) {

	// choose a free block of the correct size 
	struct Block* ptr = find_free_block(size);

	return ptr;
}

// Frees a previously allocated memory block
void free(void* ptr);

// Prints the current state of the memory allocator
void print_memory_status();