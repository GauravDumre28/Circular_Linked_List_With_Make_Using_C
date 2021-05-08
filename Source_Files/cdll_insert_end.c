#include "header.h"

// Function to Insert Node at End
Record *insert_end (Record *node)
{
    // Creating Copy of Node
    Record *nodecpy = node;

    // Creating New Node
    Record *temp;
    temp = create_node ();

    int ret = 0;
    
    if (NULL == nodecpy) {
        node = insert_begin (nodecpy);
    } else {
        while (1) {
            if (nodecpy->next == node) {
                nodecpy->next->prev = temp;
                temp->prev = nodecpy;
                temp->next = nodecpy->next;
                nodecpy->next = temp;
                break;
            }
            nodecpy = nodecpy->next;
        }

        // Calling Function to Insert Data into Node
        print ("\nEnter ID : ");
        ret = insert_data (temp);

        if (1 != ret) {
            free (temp);
            return NULL;
        }
    }

    return node;
}
