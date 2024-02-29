#include <stdio.h>
#include <stdlib.h>

typedef struct node
{
    int number;
    struct node *right;
    struct node *left;
}
node;

int main(void)
{
    node *tree = NULL; // declares and initializes a pointer variable named tree.

    node *n = malloc(sizeof(node)); //It specifies that n is a pointer of type node *. This means n can store memory addresses, specifically the addresses of node objects (nodes in the tree).
    if (n == NULL)
    {
        return 1;
    }
    n->number = 2; //Assigns the value 2 to the number member of the newly allocated node.
    n->left = NULL; //Sets the left pointer of the new node to NULL, indicating it has no left child initially.
    n->right = NULL; //Sets the right pointer of the new node to NULL, indicating it has no right child initially.
    tree = n; //Assigns the address of the newly created node to the tree pointer. This makes the first node the root of the tree.

    //Add number to the list
    n = malloc(sizeof(node));
    if (n == NULL)
    {
        free_tree(tree);
        return 1;
    }
    n->number = 1;
    n->left = NULL;
    n->right = NULL;
    tree->left = n; //inserting this new node as the left child of the root node of the binary tree.

    n = malloc(sizeof(node));
    if (n == NULL)
    {
        free_tree(tree);
        return 1;
    }
    n->number = 3;
    n->left = NULL;
    n->right = NULL;
    tree->right = n;

    //print tree
    print_tree(tree);

    //free tree
    free_tree(tree);
    return 0;
}

void free_tree(node *root)
{
    if (root == NULL)
    {
        return 1;
    }
    free_tree(root->right);
    free_tree(root->left);
    free(root);
}

void print_tree(node *root)
{
    if (root == NULL)
    {
        return 1;
    }
    print_tree(root->left);
    printf("%i\n", root->number);
    print_tree(root->right);
}
