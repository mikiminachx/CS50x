#include <cs50.h>
#include <stdio.h>
#include <string.h>

// Searching for a string

int main(void)
{
    string strings[] = {"dog", "cat", "food", "sheep", "cow"};

    // prompt
    string s = get_string("Word: ");

    for (int i = 0; i < 5; i++)
    {
        if (strcmp(strings[i], s) == 0)
        {
            printf("Found!\n");
            return 0;
        }
    }
    printf("Not Found!\n");
    return 1;

}
