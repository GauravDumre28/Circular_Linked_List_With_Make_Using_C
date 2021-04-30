#include "header.h"

// Function to Insert Data
int cdll_insert_data (Record *data)
{
    unsigned int id;
    char str[MAX];
    int ret = 0;

    if (NULL == data) {
        return FAILURE;
    }

    while (1) {
        id = 0;

        print ("\nEnter ID : ");
        
        if (NULL == (fgets (str, MAX, stdin))) {
            print ("\n-> Fgets Failed : Insert Data\n");
            break;
        }

        // Function to Validate Users Input        
        ret = stoint (str, &id);
        __fpurge (stdin);

        if ((1 != ret) || (0 == id)) {
            print ("\n-> Error : Invalid Input\n");
        } else {
            break;
        }

        *str = '\0';
    }

    // Assigning Input to the Node
    data->id = id;
    
    return SUCCESS;
}
