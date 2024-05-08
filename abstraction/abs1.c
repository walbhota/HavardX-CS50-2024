#include <stdio.h>

void affirm(void);
int main(void)
{
    for(int i = 0; i < 3; i++)
    {
        affirm();
    }
}

void affirm(void)
{
    printf("E go better\n");
}
