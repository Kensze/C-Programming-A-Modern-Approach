/* Test to see return of recursive function */

#include <stdio.h>

int factorial(int n);

int main(void)
{
    int n;
    printf("Enter a number to be factorialed: ");
//    scanf("%d", &n);
//    printf("%d factorial is: %d\n", n, factorial(n));

    for (int i = 0; i < 6; i++) {
    printf("%d factorial is: %d\n", i, factorial(i));
    }

    return 0;
}

int factorial(int n)
{
    if (n <= 1)
        return 1;
    else
        return n * factorial(n-1);
}
