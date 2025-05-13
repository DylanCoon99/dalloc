#include <stdio.h>
#include <stdlib.h>
#include <stddef.h>
#include <sys/mman.h> //mmap
#include "../include/allocator.h"
#include "../include/block.h"


struct Allocator memory_allocator;

/*
Implements memory allocation strategies (first-fit, best-fit, worst-fit). It contains functions 
that manage memory requests, find appropriate blocks, and allocate memory.
*/



// Initializes the allocator with a given size
void init_allocator(size_t size, Alloc_Policy alloc_policy) {



	Block *base_block;

	base_block = mmap(NULL, size, PROT_READ | PROT_WRITE, MAP_PRIVATE , -1, 0);


	memory_allocator.size = size;
	memory_allocator.free_list = base_block;
	memory_allocator.alloc_policy = alloc_policy;

}

// Allocates memory using the selected strategy (first-fit, best-fit, worst-fit)
void* dalloc(size_t size) {
	return NULL;
}

// Frees a previously allocated memory block
void free(void* ptr);

// Prints the current state of the memory allocator
void print_memory_status();

