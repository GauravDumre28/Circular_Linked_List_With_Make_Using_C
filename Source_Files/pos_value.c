#include "header.h"

// Taking Position from User to Insert Node
int position (Record *node)
{
    unsigned int pos = 0;
    int count;

    // Calling Function to Count Nodes
    count = count_node (node);

    while (1) {
        pos = 0;
        
        // Taking Position as Input
        print ("\nEnter Position : ");
        pos = integer_input ();

        if (0 < pos) {
            if (pos > count) {
                print ("\n--> Position Should be Less Than Nodes\n");
                print ("--> Number of Nodes : %d\n", count);
            } else {
                break;
            }
        } else {
            print ("\n-> Error : Invalid Input - Position\n");
        }
    }

    return pos;
}
