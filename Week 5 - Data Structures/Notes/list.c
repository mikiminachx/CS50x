// Resizing arrays

#include <stdio.h>

int main(void)
{
    int *list = malloc(3 * sizeof(int));
    // Use malloc to allocate 3 * size of the integer
    if (list == NULL)
    {
        return 1;
    }

    list[0] = 1; // location 0 * 4 = 0
    list[1] = 2; // location 1 * 4 = 4, instead of 1
    list[2] = 3; // location 2 * 4 = 8, instead of 2

    int *tmp = malloc(4 * sizeof(int));
    if (tmp == NULL)
    {
        free(list);
        return 1;
    }

    for (int i = 0; i < 3; i++)
    {
        tmp[i] = list[i];
    }

    tmp[3] = 4;
    free(list);
    list = tmp;

    for (int i = 0; i < 3; i++)
    {
        printf("%i\n", list[i]);
    }
}

//Notes:
// Allocating 4 in a new list.
// Allocate memory to the tmp list.
// Free the old list.
// Then, copy the old list to tmp.
// Next, allocate 4 to tmp.

