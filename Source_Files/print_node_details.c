#include "header.h"

// Function to Display Node Details 
void print_node (Record *node)
{
    // Printing Node Details
    print ("\nPrev = %p", node->prev);
    print ("\n---- ID : %d", node->id);
    print ("\nNext = %p\n", node->next);
    return;
}