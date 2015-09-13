/* Countdown using a pointer */


#include <stdio.h>

void countdown(int *n);

int main(void)
{
    int i;
    int *p = &i;

    for (i = 10000000; i > 0; i--)
        countdown(p);
}

void countdown(int *n)
{
    printf("%d and counting down\n", *n);
}
