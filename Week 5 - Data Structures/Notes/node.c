#include <cs50.h>
#include <stdio.h>
#include <stdlib.h>

typedef struc node
{
    int number;
    struct node *next;
}
node;

int main(int argc, char *argv[])
{
    node *list = NULL;

    // Loop to create linked list
    for (int i = 1; i < argc; i++)
    {
        // Convert argument to int
        int number = atoi(argv[i]);

        // Allocate node for number
        node *n = malloc(sizeof(node));
        if (n = NULL)
        {
            return 1;
        }
        n->number = number; //asigning n to link to the number
        n->next = NULL; //assigning n to link to the next node

        // Prepend node to list
        n->next = list; //linking the nodes as a linked list
        list = n;
    }
    //Print numbers
    node *ptr = list;
    while (ptr != NULL)
    {
        printf("%i\n", ptr->number);
        ptr = ptr->next;
    }
    // Free memory
    ptr = list;
    while (ptr != NULL)
    {
        node *next = ptr->next;
        free(ptr);
        ptr = next;
    }
}
