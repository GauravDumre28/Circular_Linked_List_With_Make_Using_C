#include "header.h"

// Function to Insert Node at Beginning
Record *insert_begin (Record *node)
{
    // Calling Function to Creat New Node
    Record *temp;
    temp = create_node ();

    int ret = 0;

    if (NULL == node) {
        temp->next = temp;
        node = temp;
        temp->prev = temp;
    } else {
        node->prev->next = temp;
        temp->next = node;
        temp->prev = node->prev;
        node->prev = temp;
        node = temp;
    }

    // Calling Function to Insert Data into Node
    print ("\nEnter ID : ");
    ret = insert_data (temp);

    if (1 != ret) {
        free (temp);
        return NULL;
    }

    return node;
}
