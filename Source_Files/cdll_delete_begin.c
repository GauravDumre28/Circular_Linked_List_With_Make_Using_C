#include "header.h"

// Function to Delete Node at Beginning
Record *delete_begin (Record *node)
{
    Record *temp = node;

    // Deleting Last Node if Present
    if (NULL != node) {
        if (node == temp->next) {
            node = NULL;
        } else {
            temp->next->prev = temp->prev;
            temp->prev->next = temp->next;
            node = temp->next;
        }
        
        free (temp);
    }

    return node;
}
