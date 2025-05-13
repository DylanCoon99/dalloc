// servers as the entry point for testing the allocator
#include <stdio.h>
#include <stdlib.h>
#include "../include/allocator.h"

int main() {
    printf("Initializing custom memory allocator...\n");

    // Example usage of allocator functions
    void* ptr1 = dalloc(32);
    void* ptr2 = dalloc(64);

    printf("Allocated memory at %p and %p\n", ptr1, ptr2);

    free(ptr1);
    free(ptr2);

    printf("Memory freed. Exiting...\n");

    return 0;
}
