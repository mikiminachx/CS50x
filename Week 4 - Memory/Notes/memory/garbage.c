#include <stdio.h>

int main(void)
{
    int scores[1024];
    for (int i = 0; i < 1024; i++)
    {
        printf("%i\n", scores[i]);
    }
}

// Notes:
// When you compile for a block of memory, there is no guarantee that this memory will be empty.
// It’s very possible that this memory that you allocated was previously utilized by the computer.
// Accordingly, you may see junk or garbage values. This is a result of you getting a block of memory but not initializing it.
// It’s always best practice to be aware of the potential for garbage values when you do not initialize blocks of memory to some other value like zero or otherwise.


