#include <cs50.h>
#include <stdio.h>
#include <stdlib.h>

typedef struct node
{
    int number; //defined number is integer
    struct node *next; //defined next is the node
}
node;

int main(int argc, char *argv[])
{
    node *next = NULL; //assign 'next' aka the node is null

    for (int i = 1; i < argc; i++)
    {
        int number = atoi(argv[i]); //loop to convert the input from string to int

        node *n = malloc(sizeof(node)); //allocate nodes and memories for numbers
        if (n == NULL) //if no number
        {
            return 1; // no action
        }
        n->number = number; //allocating node for numbers
        n->next = NULL; // allocating node is null value

        //If the list is empty
        if (list == NULL)
        {
            //This node is the whole list
            list = n;
        }
        //If the list has numbers already
        else
        {
            //Iterate over nodes in list
            for (node *ptr = list; ptr != NULL; ptr = ptr->next) //allocate node for the list; it's not empty; moving on to the next node
            {
                //If it is the end of the node
                if (ptr->next == NULL)
                {
                    //append the node
                    ptr->next = n;
                    break;
                }
            }
        }

    }
    //Print numbers
    for (node *ptr = list; ptr != NULL; ptr = ptr->next)
    {
        printf("%i\n", ptr->number);
    }

    //Free memory
    node *ptr = list;
    while (ptr != NULL)
    {
        free(ptr);
        ptr = next;
    }
}
