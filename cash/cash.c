#include <cs50.h>
#include <stdio.h>

int get_cents(void);
int calculate_quarters(int cents);
int calculate_dimes(int cents);
int calculate_nickels(int cents);

int main(void)
{
    int cents = get_cents();

    int quarters = calculate_quarters(cents);
    cents -= quarters * 25;

    int dimes = calculate_dimes(cents);
    cents -= dimes * 10;

    int nickels = calculate_nickels(cents);
    cents -= nickels * 5;

    int pennies = cents; // Directly assign remaining cents to pennies

    printf("%i quarter(s), %i dime(s), %i nickel(s), %i penny(ies)\n", quarters, dimes, nickels, pennies);
    printf("Total coins: %i\n", quarters + dimes + nickels + pennies);
}

int get_cents(void)
{

    int no_cents;
    do
    {
        no_cents = get_int("Change owed: ");
    }
    while (no_cents < 0);
    return no_cents;
}

int calculate_quarters(int cents)
{

    int quarters = cents / 25;
    return quarters;
}

int calculate_dimes(int cents)
{

    int dimes = cents / 10;
    return dimes;
}

int calculate_nickels(int cents)
{

    int nickels = cents / 5;
    return nickels;
}

int calculate_pennies(int cents)
{

    return cents;
}
