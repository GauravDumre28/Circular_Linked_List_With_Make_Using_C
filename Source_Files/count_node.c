#include "header.h"

// Function to Count Numberof Nodes in Linked List
int count_node (Record *node)
{
    int count = 0;
    Record *temp = (void *)node;

    if (NULL == node) {
        print ("\n-> Linked List is Empty\n");
    } else {
        count++;

        // Counting Number of Nodes in Double Linked List
        while (temp->next != node) {
            temp = temp->next;
            count++;
        }
    }

    return count;
}
