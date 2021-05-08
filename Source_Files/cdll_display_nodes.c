#include "header.h"

// Function to Display All Present Node
Record *display_nodes (Record *node)
{
    int index = 1;
    Record *temp = node;

    if (NULL != node) {
        // Printing All Nodes One by One
        print ("\n\n-- Nodes in Circular Linked List --\n");
        
        while (1) {
            print ("\n-- Node: %d --", index);
            
            // Calling Function to Print Node Details
            print_node (temp);

            if (temp->next == node) {
                break;
            }
            
            temp = temp->next;
            index++;
        }
    }

    return node;
}