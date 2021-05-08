#include "header.h"

// Function to Delete Node at Position 
Record *delete_pos (Record *node)
{
    if (NULL != node) {
        Record *temp = node;

        int pos = 0;
        int index = 0;

        pos = position (node);

        // Deleting Node if Present on Position
        if (1 == pos) {
            node = delete_begin (node);
        } else {
            // If it is Last Node
            if (node == temp->next) {
                node = delete_end (node);
            }
            
            while (1) {
                // Deleting Node at Position
                if (index == (pos -1)) {
                    temp->prev->next = temp->next;
                    temp->next->prev = temp->prev;

                    free (temp);
                    break;
                }

                temp = temp->next;
                index++;
            }
        }
    }

    return node;
}