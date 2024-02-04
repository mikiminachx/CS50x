#include <cs50.h>
#include <stdio.h>

// Searching for a number

int main(void)
{
    int numbers[] = {1, 10, 5, 20, 100, 50, 8, 15, 25};

    // Ask for a number to search for
    int n = get_int("Number: ");

    for (int i = 0; i < 9; i++)
    {
        if (numbers[i] == n)
        {
            printf("Found!\n");
            return 0;
        }
    }
    printf("Not Found!\n");
    return 1;
}
