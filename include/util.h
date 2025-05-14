#ifndef UTIL_H
#define UTIL_H

#include <stdio.h>
#include <stdlib.h>
#include <stddef.h>
#include "../include/allocator.h"
#include "../include/block.h"


// util function definitions

Block* first_fit(size_t size);
Block* best_fit(size_t size);
Block* worst_fit(size_t size);

#endif