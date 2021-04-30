#include "header.h"

// Function to Create New Node
Record *create_node ()
{
    int count = 0;
    Record *new = NULL;

    while (1) {
        // Allocating Dynamic Memory for Node
        new = (Record *)malloc(sizeof (Record));

        if (NULL == new) {
            print ("\n-> Malloc Failed\n");
            count++;
        } else {
            break;
        }

        // If 'malloc()' Fails 5 Times, Terminating Program
        if (5 == count) {
            print ("\n\t-- Exit --\n\n");
            exit(0);
        }
    }
    
    return new;
}
