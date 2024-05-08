#include <cs50.h>
#include <stdio.h>


int main(void)
{
    int x = get_int("what is X: ");
    int y = get_int("what is Y: ");

    //typecasting is done below, with the integers x and y beinf treated as float types
    //And typecasting can be done on any datatype to another datatype.
    double z = (double)x / (double)y;

    printf("Your answer is %.20f\n", z); // %f applies to both float and double

    char test = 65;
    printf("%c\n", test);// This will give you A, as a result of ASCII.. 65 representing A in decimal
}
