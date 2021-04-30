#include "header.h"

int main ()
{
    // Creating Head for Double Linked List
    Record *head = NULL;

    // Creating Function Pointer
    Record* (*func) (Record*);

    while (1) {
        // Calling Function for Swich Case Scenario for User
        func = cdll_switch_case ();
        
        if (NULL == func) {
            // Calling Function to Free the Previously Allocated Memory
            head = cdll_free_node (head);
            
            print ("\n------------------------------------------\n");
            
            if (NULL == head) {
                print ("--> Memory is Free\n");
            } else {
                print ("--> Error : Memory is Not Free\n");
            }
            
            print ("\n\t-- Exit --");
            print ("\n------------------------------------------\n");
            break;

        } else {
            // Calling Function Using Function Pointer
            head = (* func) (head);
            if (func != cdll_display){
                head = cdll_display (head);
            }
            
            // Cheaking Return Value of Head
            if (NULL != head) {
                print ("\n--> Success : List Updated\n");
                print ("------------------------------------------\n");
            } else {
                print ("\n--> List is Empty\n" );
                print ("------------------------------------------\n");
            }
        }
    }

    return 0;
}
