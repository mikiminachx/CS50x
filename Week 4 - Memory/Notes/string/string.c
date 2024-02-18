#include <cs50.h>
#include <stdio.h>

int main(void)
{
    char *s = "HI!";
    // Print the string "HI!"
    printf("%s\n", s);
    printf("%c\n", s[0]);
    printf("%c\n", s[1]);
    printf("%c\n", s[2]);
}

// Notes:
// *s is the location of memories where "HI!" are stored.
// printf("%s\n", s) is printing the whole string.
// printf("%c\n", s[0/1/2]) is printing the characters in different position in the string "HI!".
