#include <stdio.h>
#include <stdlib.h>
#include <assert.h>
#include "../include/allocator.h"


void test_split_block() {

	struct Block test_block = {100, NULL, 1};

	split_block(&test_block, 40);

	assert(test_block.size == 40);
	assert(test_block.next->size == 60);
	assert(test_block.next->free == 1);

	printf("test_split_block PASSED\n");
}





void test_free_block_selection() {
	
	// add test here

	printf("test_free_block_selection PASSED\n");
}



void test_merge_free_blocks() {
	
	// add test here

	printf("test_merge_free_blocks PASSED\n");
}



void debug_blocks(struct Block* head) {
	while (head) {
		printf("[Block at %p | Size: %zu | Free: %d]\n", (void*)head, head->size, head->free);
		head = head->next;
	}
}



