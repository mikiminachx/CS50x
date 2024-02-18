#include <stdio.h>

int main(void)
{
    int n = 50;
    int *p = &n;
    printf("%i\n", *p);
}

// Notes:
// int n = 50
// Defining integer n = 50

// int *p = &n
// *p is a point that contains the memory address of integer n,
// because &n means the address of n.

// printf("%i\n", *p)
// %i = the integer n
// *p is the address of integer n

// Therefore, it will print out 50.
