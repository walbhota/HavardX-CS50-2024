#include <cs50.h>
#include <stdio.h>

int n;
int main(void)
{
    //prompt the user for input
    do
    {
        n = get_int("Size of Box: ");
    }
    while(n < 1);

    //Print an n-by-n grid of bricks

    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < n; j++)
        {
            printf("#");
        }

        printf("\n");
    }
}
