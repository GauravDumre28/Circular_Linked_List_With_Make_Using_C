#include "header.h"

// Function to Delete Node at Beginning
Record *cdll_delete_end (Record *node)
{
    Record *temp = node;

    // Deleting End Node if Present
    if (NULL != node) {
        // Calling delete_begin(), if 1st Node
        if (node == node->next) {
            node = cdll_delete_begin (node);
        }
        
        while (1) {
            // Deleting Node from End
            if (node == temp->next) {
                temp->prev->next = temp->next;
                temp->next->prev = temp->prev;

                free (temp);
                break;
            }

            temp = temp->next;
        }
    }

    return node;
}
