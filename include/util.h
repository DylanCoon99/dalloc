#ifndef UTIL_H
#define UTIL_H

#include <stdio.h>
#include <stdlib.h>
#include <stddef.h>
#include "../include/allocator.h"
#include "../include/block.h"


// util function definitions

size_t get_data_size(struct Block* block);

struct Block* first_fit(size_t size);
struct Block* best_fit(size_t size);
struct Block* worst_fit(size_t size);

#endif