#include "header.h"

// Function to Take Integer as Input
int integer_input (void)
{
    unsigned int temp;
    char str[MAX];
    int ret = 0;

    while (1) {
        temp = 0;
        
        if (NULL == (fgets (str, MAX, stdin))) {
            print ("\n-> Fgets Failed : Insert Data\n");
            break;
        }

        // Function to Validate Users Input        
        ret = string_to_int (str, &temp);
        __fpurge (stdin);

        if ((1 != ret) || (0 == temp)) {
            print ("\n-> Error : Invalid Input\n");
        } else {
            break;
        }

        *str = '\0';
    }
    
    return temp;
}
