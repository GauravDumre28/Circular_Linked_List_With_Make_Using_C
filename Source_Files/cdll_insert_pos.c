#include "header.h"

// Function to Insert Node at End
Record *cdll_insert_pos (Record *node)
{
    if (NULL == node) {
        return NULL;
    }

    // Creating Copy of Node
    Record *nodecpy = node;

    // Creating New Node
    Record *temp = NULL;
    temp = create_node ();

    int ret = 0;
    int pos;
    int index = 1;

    // Calling Function to take Position as Input
    pos = position (node);
    
    if (1 == pos) {
        node = cdll_insert_begin (nodecpy);
        return node;
    } else {
        while (1) {
            if (index == (pos - 1)) {
                nodecpy->next->prev = temp;
                temp->prev = nodecpy;
                temp->next = nodecpy->next;
                nodecpy->next = temp;
                break;
            }

            nodecpy = nodecpy->next;
            index++;
        }
    }

    // Function to Insert Data into Node
    ret = cdll_insert_data (temp);

    if (1 != ret) {
        free (temp);
        return NULL;
    }

    return node;
}
