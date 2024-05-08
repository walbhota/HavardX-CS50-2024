#include <cs50.h>
#include <stdio.h>

int main(void)
{
    string firstname = get_string("What is your firstname: ");
    string lastname = get_string("what is your lastname: ");

    printf("Hello, %s %s\n", lastname, firstname);
}
