/* Test to see unwinding in return call of a recursive function */

#include <stdio.h>

int power(int a, int b);

int main(void)
{
    int i, n;

    printf("Enter to numbers to pow: ");
    scanf("%d%d", &i, &n);
    printf("%d to the power of %d is %d\n", i, n, power(i, n));

    return 0;
}

int power(int a, int b)
{
    if (b < 1)
        return 1;
    else
        return  a * power(a, b-1);
}
