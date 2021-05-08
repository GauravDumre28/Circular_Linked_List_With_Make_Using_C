#include "header.h"

// Function to Insert Data
int insert_data (Record *data)
{
    if (NULL == data) {
        return FAILURE;
    }

    // Assigning and Taking Input for the Node
    data->id = integer_input ();
    
    return SUCCESS;
}
