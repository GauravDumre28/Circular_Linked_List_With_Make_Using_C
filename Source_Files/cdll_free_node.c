#include "header.h"

// Function to Free All Present Nodes
Record *free_nodes (Record *node)
{
    while (NULL != node) {
        node = delete_begin (node);
    }
    print ("\n--> All Nodes are Deleted\n");

    return node;
}
