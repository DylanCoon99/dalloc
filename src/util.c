#include "../include/util.h"

extern struct Allocator memory_allocator;


// util function definitions


size_t get_data_size(struct Block* block){
	size_t data_size = block->size - sizeof(struct Block);
	return data_size;
};


struct Block* first_fit(size_t size) {

	struct Block* current = memory_allocator.free_list;

    while (current != NULL) {
        if (current->free && current->size >= size) {
        	split_block(current, size);
            return current;  // Found a suitable block
        }
        current = current->next;
    }

    return NULL;  

};


struct Block* best_fit(size_t size) {

	struct Block* free_list = memory_allocator.free_list; 

	printf("This is the size for debugging purposes: %zu\n", size);

	return free_list;

};


struct Block* worst_fit(size_t size) {

	struct Block* free_list = memory_allocator.free_list; 

	printf("This is the size for debugging purposes: %zu\n", size);

	return free_list;

};
