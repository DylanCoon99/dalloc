#ifndef ALLOCATOR_H
#define ALLOCATOR_H

#include <stdio.h>
#include <stdlib.h>
#include <stddef.h>  // For size_t
#include <sys/mman.h>
#include "../include/block.h"


typedef enum {
	FIRST_FIT,
	BEST_FIT,
	WORST_FIT
} Alloc_Policy;



extern const size_t ALLOCATOR_SIZE;
extern const Alloc_Policy POLICY;

// allocator needs a size, a free list pointer, an allocation policy

struct Allocator {
	size_t size;  // size of the allocator
	struct Block* free_list;
	Alloc_Policy alloc_policy;
};


// function declarations
void *dalloc(size_t size);
void free(void* ptr);
struct Allocator init_allocator(size_t size, Alloc_Policy alloc_policy);
void print_memory_status();


#endif 