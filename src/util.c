#include "../include/util.h"

extern struct Allocator memory_allocator;


// util function definitions

struct Block* first_fit(size_t size) {

	struct Block* free_list = memory_allocator.free_list; 

	return free_list;

};

struct Block* best_fit(size_t size);
struct Block* worst_fit(size_t size);
