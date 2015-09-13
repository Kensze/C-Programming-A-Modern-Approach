#include <stdio.h>

void *multiply(int a, int b, int *c);


int main(void)
{
    int a, b, c;
    printf("Enter numbers: ");
    scanf("%d %d", &a, &b);

    int *c = multiply(a, b);

}

/* Multiply a with b and stores result in pointer c */
int *multiply(int a, int b, int *c)
{
    *c = a * b;
    return &c;

}
