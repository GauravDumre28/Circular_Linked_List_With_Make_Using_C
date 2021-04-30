#include "header.h"

// Function to Display All Present Node
Record *cdll_display (Record *node)
{
    int index = 1;
    Record *temp = node;

    if (NULL != node) {
        // Printing All Nodes One by One
        print ("\n\n-- Linked List Asc --\n");
        
        while (1) {
            printf ("\nPrev = %p", temp->prev);
            printf ("\nN-%d : %d", index, temp->id);
            printf ("\nNext = %p\n", temp->next);

            if (temp->next == node) {
                break;
            }
            
            temp = temp->next;
            index++;
        }
    }

    return node;
}
