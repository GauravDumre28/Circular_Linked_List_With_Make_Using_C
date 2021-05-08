#include "header.h"

// Function to Insert Node at End
Record *insert_mid (Record *node)
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
    int mid = 0;
    int count = 0;
    int index = 1;

    // Calling Function to Count Numbers of Nodes
    count = count_node (node);
    
    if (0 != (count % 2)) {
        mid = (count / 2) + 1;
    } else {
        mid = count / 2;
    }
    
    if (1 == mid) {
        node = insert_begin (nodecpy);
        return node;
    } else {
        while (1) {
            if (index == mid) {
                nodecpy->prev->next = temp;
                temp->prev = nodecpy->prev;
                temp->next = nodecpy;
                nodecpy->prev = temp;
                break;
            }

            nodecpy = nodecpy->next;
            index++;
        }
    }

    // Calling Function to Insert Data into Node
    print ("\nEnter ID : ");
    ret = insert_data (temp);

    if (1 != ret) {
        free (temp);
        return NULL;
    }
    return node;
}
