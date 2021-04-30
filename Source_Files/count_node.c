#include "header.h"

// Function to Count Numberof Nodes in Linked List
int count_node (Record *d_node)
{
    int count = 0;
    Record *temp = (void *)d_node;

    if (NULL == d_node) {
        print ("\n-> Linked List is Empty\n");
    } else {
        count++;

        // Counting Number of Node in Double Linked List
        while (temp->next != d_node) {
            temp = temp->next;
            count++;
        }
    }

    return count;
}
