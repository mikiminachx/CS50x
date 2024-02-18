#include <cs50.h>
#include <stdio.h>
#include <string.h>

int main(void)
{
    // Open CSV file
    FILE *file =fopen("phonebook.csv", "a");
    if (!file)
    {
        return 1;
    }

    char *name = get_string("Name: ");
    char *number = get_string("Number ");

    // Print to file
    fprintf(file, "%s, %s\n", name, number);

    // Close file
    fclose(file);
}

// Notes:
// This is to make sure "phonebook.csv" exist prior to running the program.
