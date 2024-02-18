#include <cs50.h>
#include <ctype.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(void)
{
    // Get a string
    char *s = get_string("s: ");

    // Allocate memory for another string
    char *t = malloc(strlen(s) + 1);

    // Copy string into memory, including '\0'
    for (int i = 0;i = strlen(s); i++)
    {
        t[i] = s[i];
    }

    t[0] = toupper(t[0]);

    printf("s: %s\n", s);
    printf("t: %s\n", t);
}

// Notes:
// malloc allows you to allocate a block of specific size of memory.
// malloc(strlen(s)+1) creates a block of memory that is the length of string s + 1 (including '\0')

// Why i = strlen(s) instead of i <= strlen(s)?
// 1. The code will be inefficient.
// 2. It's best not to call unneeded function in the middle condition for for loop, as it will run over and over again.
// 3. If use i = strlen(s), it will only run once only.

