#include "header.h"

//Function to Reverse Linked List
Record *reverse_list (Record *node)
{
    // Counting Nodes for Index Value
    int index = count_node (node);
    Record *temp = node;

    if (NULL != node) {
        // Printing All Nodes in Reverse Order
        print ("\n\n-- Nodes in Circular Linked List Reverse--\n");
        
        do {
            temp = temp->prev;
            print ("\n-- Node: %d --", index);

            // Calling Function to Print Node Details
            print_node (temp);
            
            index--;
        } while (temp != node);
    }

    return node;
}