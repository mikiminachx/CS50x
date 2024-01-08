#include <cs50.h>
#include <stdio.h>

void print_pyramid(int height);

int main(void)
{
    int height;
    do
    {
        height = get_int("Height: ");
    }
    while (height < 1 || height > 8);
    print_pyramid(height);
}

void print_pyramid(int height)
{
    // loop to add new line
    for (int i = 0; i < height; i++)
    {
        // loop to add spaces
        int spaces = height - (i + 1);
        for (int j = 0; j < spaces; j++)
        {
            printf(" ");
        }
        // loop to print left dashes
        int dashes = (i + 1);
        for (int x = 0; x < dashes; x++)
        {
            printf("#");
        }
        // print gap
        printf("  ");
        // loop to print right dashes
        for (int r = 0; r < dashes; r++)
        {
            printf("#");
        }
        printf("\n");
    }
}
