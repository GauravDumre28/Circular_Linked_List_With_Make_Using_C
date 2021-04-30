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
void *cdll_switch_case ();

//Function to Inseert Data into Node
int cdll_insert_data (Record *);

//Function to Display All Nodes
Record *cdll_display (Record *);

//Function to Free All Nodes
Record *cdll_free_node (Record *);

//Function to Insert Node at the Beginning
Record *cdll_insert_begin (Record *);

//Function to Insert Node at the End
Record *cdll_insert_end (Record *);

//Function to Insert Node at Any Position
Record *cdll_insert_pos (Record *);

//Function to Insert Node at the Middle
Record *cdll_insert_mid (Record *);

//Function to Delete Node at the Beginning
Record *cdll_delete_begin (Record *);

//Function to the Delete Node at the End
Record *cdll_delete_end (Record *);

//Function to the Delete Node at Any Position
Record *cdll_delete_pos (Record *);

//Function to the Delete Node from the Mdddle
Record *cdll_delete_mid (Record *);

//Function to Convert String to Integer
int stoint (char *, unsigned int *);

//Function to Count Number of Nodes in Linked List
int count_node (Record *);

//Function to Take & Validate Position from User
int position (Record *);

//Function to Print Menu
void switch_menu ();

#endif
