#include "header.h"

// Function for Switch Case
void *switch_case ()
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
        ret = string_to_int (str, &choice);
        __fpurge (stdin);

        if ((1 != ret) || (0 == choice)) {
            print ("\n-> Invalid Input : Choice\n");
            continue;
        }

        // Switch Case for Calling Functions
        switch (choice) {
            case 1:
                // Returning Address of insert_begin() Function
                return insert_begin;
            
            case 2:
                // Returning Address of insert_end() Function
                return insert_end;
            
            case 3:
                // Returning Address of insert_pos() Function
                return insert_pos;
            
            case 4:
                // Returning Address of insert_pos() Function
                return insert_mid;

            case 5:
                // Returning Address of delete_begin() Function
                return delete_begin;
            
            case 6:
                // Returning Address of delete_end() Function
                return delete_end;
            
            case 7:
                // Returning Address of delete_pos() Function
                return delete_pos;
            
            case 8:
                // Returning Address of insert_pos() Function
                return delete_mid;
            
            case 9:
                // Returning Address of insert_pos() Function
                return free_nodes;
            
            case 10:
                // Returning Address of delete_end() Function
                return reverse_list;
            
            case 11:
                // Returning Address of insert_pos() Function
                return search_node;
            
            case 14:
                // Returning Address of display() Function
                return display_nodes;

            default:
                if (15 == choice) {
                    return NULL;
                } else {
                    print ("\n-> Enter Correct Choice\n");
                }
        }
    } while (choice != 15);

    return NULL;
}
