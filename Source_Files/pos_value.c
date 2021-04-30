#include "header.h"

// Taking Position from User to Insert Node
int position (Record *node)
{
    unsigned int pos = 0;
    char str[20];
    int ret = 0;
    int count;

    // Calling Function to Count Nodes
    count = count_node (node);

    while (1) {
        pos = 0;
        print ("\nEnter Position : ");

        if (NULL == (fgets (str, MAX, stdin))) {
            print ("\n--> Fgets Failed : Position\n");
            break;
        }

        // Validating Position Value
        ret = stoint (str, &pos);
        __fpurge (stdin);

        if ((1 == ret) && (0 < pos)) {
            if (pos > count) {
                print ("\n--> Position Should be Less Than Nodes\n");
                print ("--> Number of Nodes : %d\n", count);
            } else {
                break;
            }
        } else if ((1 != ret) || (0 == pos)) {
            print ("\n-> Error : Invalid Input - Position\n");
        }
    }

    return pos;
}
