#include <cs50.h>
#include <stdio.h>
#include <stdlib.h>

typedef struct node
{
    int number;
    struct node *next;
}
node;

int main(int argc, char *argv[])
{
    node *list = NULL; //node *list points to the head (first node) of the entire list

    for (int i = 1; i < argc; i++)
    {
        int number = atoi(argv[i]);

        //allocate nodes
        node *n = malloc(sizeof(node)); //node *n essentially becomes a temporary pointer that holds the address of the newly created node during each iteration of the loop.
        if (n == NULL)
        {
            return 1;
        }
        n->number = number;
        n->next = NULL;

        if (list == NULL)
        {
            list = n;
        }
        else if (n->number < list->number)
        {
            n->number = list; //This line connects the new node (n) to the existing list. It makes the next pointer of the new node point to the current first node of the list.
            list = n; //This line designates the new node (n) as the new head of the list.
        }
        else
        {
            for (node *ptr = list; ptr != NULL; ptr = ptr->next)
            {
                if (ptr->next == NULL)
                {
                    ptr->next = n; //This line sets the next pointer of the current node (ptr) to point to the newly created node (n).
                    //this appends the new node (n) to the end of the existing linked list.
                    break;
                }
                //If it is in the middle of the list
                if (n->number < ptr->next->number)
                {
                    n->next = ptr->next; //sets the next pointer of the new node (n) to point to the node that was originally next to the current node (ptr->next).
                    //establishes a connection between the new node and the node that will come after it in the list.
                    ptr->next = n; // sets the next pointer of the current node (ptr) to point to the new node (n).
                    //This effectively inserts the new node between the current node and its original next node, placing it in the correct position for maintaining the sorted order.
                    break;
                }
            }
        }
    }

    //print
    for (node *ptr = list; ptr != NULL; ptr = ptr->next)
    {
        printf("%i\n", ptr->number);
    }

    //free memory
    node *ptr = list;
    while (ptr != NULL)
    {
        free(ptr);
        ptr = next;
    }
}
