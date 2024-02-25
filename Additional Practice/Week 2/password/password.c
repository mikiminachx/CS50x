// Check that a password has at least one lowercase letter, uppercase letter, number and symbol
// Practice iterating through a string
// Practice using the ctype library

#include <cs50.h>
#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>

bool valid(string password);

int main(void)
{
    string password = get_string("Enter your password: ");
    if (valid(password))
    {
        printf("Your password is valid!\n");
    }
    else
    {
        printf("Your password needs at least one uppercase letter, lowercase letter, number and symbol\n");
    }
}

// TODO: Complete the Boolean function below
bool valid(string password)
{
    int lower = 0;
    int upper = 0;
    int symbol = 0;
    int number = 0;

    for (int i = 0, len = strlen(password); i < len; i++)
    {
        if (password[i] >= 'a' && password[i] <= 'z')
        {
            lower++;
        }
        if (password[i] >= 'A' && password[i] <= 'Z')
        {
            upper++;
        }
        if (password[i] >= '!' && password[i] <= '/')
        {
            symbol++;
        }
        if (password[i] >= '0' && password[i] <= '9')
        {
            number++;
        }
    }

    if (lower >= 1 && upper >= 1 && symbol >= 1 && number >= 1)
    {
        return true;
    }
    else
    {
        return false;
    }
}
