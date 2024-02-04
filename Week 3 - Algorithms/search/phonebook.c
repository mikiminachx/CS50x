#include <cs50.h>
#include <stdio.h>
#include <string.h>

// Searching in a phonebook
// define data structure
typedef struct
{
    string name;
    string number;
}
person;

int main(void)
{
    person people[3];

    people[0].name = "John";
    people[0].number = "+852-12345678";

    people[1].name = "Mary";
    people[1].number = "+852-87654321";

    people[2].name = "Sam";
    people[2].number = "+852-23456789";

    // Prompt
    string s = get_string("Name: ");

    for (int i = 0; i < 6; i++)
    {
        if (strcmp(people[i].name, s) == 0)
        {
            printf("Found %s\n", people[i].number);
            return 0;
        }
    }
    printf("Not found\n");
}
