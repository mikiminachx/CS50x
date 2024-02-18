#include <cs50.h>
#include <stdio.h>

int main(void)
{
    char *s = get_string("s: ");
    char *t = get_string("t: ");

    if(s == t)
    {
        printf("same\n");
    }
    else
    {
        printf("different\n");
    }
}

// Notes:
// It will print out "different"
// because the computer is comparing the memory locations of string s and t, but not the string per
