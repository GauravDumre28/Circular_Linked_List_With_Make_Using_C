#include "header.h"

// Function to Display All Present Node
Record *search_node (Record *node)
{
    Record *temp = node;
    int flag = 0;
    unsigned int num_id = 0;
    int index = 1;

    if (NULL != node) {
        // Calling Fuction to Take Search Element
        print ("\n Enter Node to Search: ");
        num_id = integer_input();
        
        while (1) {
            if (temp->id == num_id) {
                flag = 1;
                print ("\n\n--> Node Present at Position: %d\n", index);
                print ("\n-- Details --");

                // Calling Function to Print Node Details
                print_node (temp);
            }

            if (temp->next == node) {
                break;
            }
            
            temp = temp->next;
            index++;
        }
    }

    if (0 == flag) {
        print ("\n\n--> Node in Not Present with ID: %d\n", num_id);
    }

    return node;
}