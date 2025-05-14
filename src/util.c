#include "../include/util.h"

extern struct Allocator memory_allocator;


// util function definitions

Block* first_fit(size_t size) {

	Block* free_list = memory_allocator.free_list; 

	return free_list;

};

Block* best_fit(size_t size);
Block* worst_fit(size_t size);
