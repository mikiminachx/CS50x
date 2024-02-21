#include <cs50.h>
#include <stdio.h>

bool prime(int number);

int main(void)
{
    int min;
    do
    {
        min = get_int("Minimum: ");
    }
    while (min < 1);

    int max;
    do
    {
        max = get_int("Maximum: ");
    }
    while (min >= max);

    for (int i = min; i <= max; i++)
    {
        if (prime(i))
        {
            printf("%i\n", i);
        }
    }
}

bool prime(int num)
{
    // TODO
    if (num == 0 || num == 1)
    {
        return false;
    }
    else
    {
        for (int i = 2; i <= num - 1; i++)
        {
            if (num % i == 0)
            {
                return false;
            }
        }
        return true;
    }
}
