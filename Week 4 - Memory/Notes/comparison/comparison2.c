#include <cs50.h>
#include <stdio.h>
#include <string.h>

int main(void)
{
    char *s = get_string("s: ");
    char *t = get_string("t: ");

    if (strcmp(s, t) == 0)
    {
        printf("same\n");
    }
    else
    {
        printf("different\n");
    }
}

// Notes:
// If use the "strcmp" function from <string.h>, it will not compare the memory locations, instead, it will compare the string itself.
