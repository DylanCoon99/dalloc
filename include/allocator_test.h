#ifndef ALLOCATORTEST_H
#define ALLOCATORTEST_H

#include <stdio.h>
#include <stdlib.h>
#include <assert.h>
#include "../include/allocator.h"


void test_split_block();


void test_free_block_selection();



void test_merge_free_blocks();



void debug_blocks(struct Block* head);



#endif