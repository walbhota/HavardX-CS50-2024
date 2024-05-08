#include <cs50.h>
#include <stdio.h>

int add(int a, int b);

int main(void)
{
    int x = get_int("what is X: ");
    int y = get_int("what is Y: ");

    printf("The answer is %i\n", add(x,y));
}
int add(int a, int b)
{
    return a + b;
}
