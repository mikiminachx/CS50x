#include <cs50.h>
#include <stdio.h>

void draw(int n);

// Draw half of the pyramid
int main(void)
{
    // Prompt
    int height = get_int("Height: ");

    // draw function
    draw(height);
}

void draw(int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < i + 1; j++)
        {
            printf("#");
        }
        printf("\n");
    }
}
