#include "header.h"

// Function for Switch Case
void *cdll_switch_case ()
{
    unsigned int choice;
    int ret;
    char str[MAX];
 
    do {
        choice = 0;
        ret = 0;

        // Calling Function to Display Menu
        switch_menu ();
        
        if (NULL == (fgets (str, MAX, stdin))) {
            print ("\n-> Fgets Failed : Choice\n");
            break;
        }

        // Calling Function to Validate the Users Input 
        ret = stoint (str, &choice);
        __fpurge (stdin);

        if ((1 != ret) || (0 == choice)) {
            print ("\n-> Invalid Input : Choice\n");
            continue;
        }

        // Switch Case for Calling Functions
        switch (choice) {
            case 1:
                // Returning Address of insert_begin() Function
                return cdll_insert_begin;
            
            case 2:
                // Returning Address of insert_end() Function
                return cdll_insert_end;
            
            case 3:
                // Returning Address of insert_pos() Function
                return cdll_insert_pos;
            
            case 4:
                // Returning Address of insert_pos() Function
                return cdll_insert_mid;

            case 5:
                // Returning Address of delete_begin() Function
                return cdll_delete_begin;
            
            case 6:
                // Returning Address of delete_end() Function
                return cdll_delete_end;
            
            case 7:
                // Returning Address of delete_pos() Function
                return cdll_delete_pos;
            
            case 8:
                // Returning Address of insert_pos() Function
                return cdll_delete_mid;

            case 9:
                // Returning Address of display() Function
                return cdll_display;

            default:
                if (10 == choice) {
                    return NULL;
                } else {
                    print ("\n-> Enter Correct Choice\n");
                }
        }
    } while (choice != 10);

    return NULL;
}
