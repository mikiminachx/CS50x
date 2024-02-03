#include <cs50.h>
#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>

bool only_digits(string s);
char rotate(char c, int n);


int main(int argc, string argv[])
{
    // Make sure program was run with just one command-line argument
    if(!(argc ==2))
    {
        printf("Usage: ./caesar key\n");
        return 1;
    }

    // Make sure every character in argv[1] is a digit
    if(!(only_digits(argv[1])))
    {
        printf("Usage: ./caesar key\n");
        return 1;
    }

    // Prompt user for plaintext
    string plaintext = get_string("plaintext:  ");

    // Print cipher
    printf("ciphertext: ");
    for (int i = 0, len = strlen(plaintext); i < len; i++)
    {
        printf("%c", rotate(plaintext[i], atoi(argv[1])));

    }
    printf("\n");

}

bool only_digits(string s)
{
    if(isdigit(s[0]))
    {
        return true;
    }
    else
    {
        return false;
    }

}

char rotate(char c, int n)
{
    if isalpha(c)
    {
        if isupper(c)
        {
            return (c - 'A' + n) % 26 + 'A';
        }
        if islower(c)
        {
            return (c - 'a' + n) % 26 + 'a';
        }
        return 0;
    }
    else
    {
        return c;
    }
}
