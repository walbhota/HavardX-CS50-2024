#include <cs50.h>
#include <stdio.h>


int main(void)
{
    char c = get_char("Do you agree to the terms and conditions? ");

    if(c == 'y' || c == 'Y')
    {
        printf("You agreed to the terms and conditions\n");
    }
    else if(c == 'n' || c == 'N')
    {
        printf("You disagreed with the terms and conditions\n");
    }
    else
    {
        printf("Invalid input\n");
    }
}

