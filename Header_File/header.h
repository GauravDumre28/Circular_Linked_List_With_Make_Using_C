#ifndef CHECK

#define CHECK 1

// Header Files
#include <stdio.h>
#include <string.h>
#include <stdio_ext.h>
#include <stdlib.h>

// Defining Constants
#define MAX 20
#define print printf
#define SUCCESS 1
#define FAILURE 0

//Structure for Node of Double Linked List
typedef struct Records {
    struct Records *prev;
    int id;
    struct Records *next;
}Record;

//Function to Create Node
Record *create_node ();

//Function for Switch Case
void *switch_case ();

//Function to Inseert Data into Node
int insert_data (Record *);

//Function to Display All Nodes
Record *display_nodes (Record *);

//Function to Free All Nodes
Record *free_nodes (Record *);

//Function to Insert Node at the Beginning
Record *insert_begin (Record *);

//Function to Insert Node at the End
Record *insert_end (Record *);

//Function to Insert Node at Any Position
Record *insert_pos (Record *);

//Function to Insert Node at the Middle
Record *insert_mid (Record *);

//Function to Delete Node at the Beginning
Record *delete_begin (Record *);

//Function to Delete Node at the End
Record *delete_end (Record *);

//Function to Delete Node at Any Position
Record *delete_pos (Record *);

//Function to Delete Node from the Mdddle
Record *delete_mid (Record *);

//Function to Reverse Linked List
Record *reverse_list (Record *);

//Function to Reverse Linked List
Record *search_node (Record *);

//Function to Convert String to Integer
int string_to_int (char *, unsigned int *);

//Function to Count Number of Nodes in Linked List
int count_node (Record *);

//Function to Take & Validate Position from User
int position (Record *);

//Function to Print Menu
void switch_menu (void);

// Function to Take Integer as Input
int integer_input (void);

// Function to Display Node Details 
void print_node (Record *);

#endif
