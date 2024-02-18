#include <stdio.h>

int main(void)
{
    char *s = malloc(4);
    if (s == NULL)
    {
        return 1;
    }
    printf("s: ");
    scanf("%s", s);
    printf("s: %s\n", s);
    free(s);
    return 0;
}

// Notes:
// scanf is a build-in version function of "get_string".
// Now we pre-allocate the array of size 4. If the user inputs size 6, it could create an error.
