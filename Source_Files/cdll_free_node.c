#include "header.h"

// Function to Free All Present Nodes
Record *cdll_free_node (Record *node)
{
    while (NULL != node) {
        node = cdll_delete_begin (node);
    }

    return node;
}
