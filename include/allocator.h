#ifndef ALLOCATOR_H
#define ALLOCATOR_H

#include <stddef.h>  // For size_t


// function declarations
void *dalloc(size_t size);
void free(void* ptr);
void init_allocator(size_t size);
void print_memory_status();

#endif 