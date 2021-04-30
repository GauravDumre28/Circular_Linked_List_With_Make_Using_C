#include "header.h"

// Function to Delete Node from Middle
Record *cdll_delete_mid (Record *node)
{
    if (NULL != node) {
        Record *temp = node;

        int index = 0;
        int count = 0;
        int mid = 0;

        // Calling Function to Count Number of Nodes
        count = count_node (node);

        if (0 != (count % 2)) {
            mid = (count / 2) + 1;
        } else {
            mid = count / 2;
        }

        // Deleting Node in the Middle
        if (1 == mid) {
            node = cdll_delete_begin (node);
        } else {
            if (node == temp->next) {
                node = cdll_delete_end (node);
            }
            
            while (1) {
                if ((index + 1) == mid) {
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
