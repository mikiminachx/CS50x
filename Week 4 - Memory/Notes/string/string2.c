#include <cs50.h>
#include <stdio.h>

int main(void)
{
    char *s = "HI!";
    // Printing the characters in "HI!"
    printf("%c\n", *s);
    printf("%c\n", *(s+1));
    printf("%c\n", *(s+2));
}

// Notes:
// Defined *s to be the location memories for the characters in "HI!"
// %c = the character
// *s = where the characters in "HI!" are stored
// Therefore, printf("%c\n, *s) is printing the characters that stored in the location *s.
