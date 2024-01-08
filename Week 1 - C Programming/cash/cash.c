#include <cs50.h>
#include <stdio.h>

int get_cents(void);
int calculate_quarters(int cents);
int calculate_dimes(int cents);
int calculate_nickels(int cents);
int calculate_pennies(int cents);

int main(void)
{
    // Prompt the user for change owed, in cents.
    int cents = get_cents();
    // Calculate how many quarters you should give customer
    int quarters = calculate_quarters(cents);
    // Subtract the value of those quarters from cents
    cents = cents - (quarters * 25);
    // Calculate how many dimes you should give customer
    int dimes = calculate_dimes(cents);
    // Subtract the value of those dimes from remaining cents
    cents = cents - (dimes * 10);
    // Calculate how many nickels you should give customer
    int nickels = calculate_nickels(cents);
    // Subtract the value of those nickels from remaining cents
    cents = cents - (nickels * 5);
    // Calculate how many pennies you should give customer
    int pennies = calculate_pennies(cents);
    // Subtract the value of those pennies from remaining cents
    cents = cents - (pennies * 1);
    // Sum the number of quarters, dimes, nickels, and pennies used
    int sum = quarters + dimes + nickels + pennies;
    // Print that sum
    printf("%i\n", sum);
}

int get_cents(void)
{
    int cents;
    do
    {
            cents = get_int("Change owed: ");
        }

        while (cents < 0);
        return cents;

}
// Calculate how many quarters you should give customer
int calculate_quarters(int cents)
{
    int quarters = cents / 25;
    return quarters;
}

// Calculate how many dimes you should give customer
int calculate_dimes(int cents)
{
    int dimes = cents / 10;
    return dimes;
}

// Calculate how many nickels you should give customer
int calculate_nickels(int cents)
{
    int nickels = cents / 5;
    return nickels;
}

// Calculate how many pennies you should give customer
int calculate_pennies(int cents)
{
    int pennies = cents / 1;
    return pennies;
}
