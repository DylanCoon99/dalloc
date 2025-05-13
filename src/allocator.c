#include <stdio.h>
#include <stdlib.h>
#include <stddef.h>
#include "../include/allocator.h"
#include "../include/block.h"

// Initializes the allocator with a given size
void init_allocator(size_t size);

// Allocates memory using the selected strategy (first-fit, best-fit, worst-fit)
void* dalloc(size_t size) {
	return NULL;
}

// Frees a previously allocated memory block
void free(void* ptr);

// Prints the current state of the memory allocator
void print_memory_status();

