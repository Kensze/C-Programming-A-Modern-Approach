/* Test whether a number is prime */

#include <stdbool.h>        /* C99 only */
#include <stdio.h>

bool is_prime(int n)
{
    int divisor;

    if (n <= 1)
        return false;
    for (divisor = 2; divisor * divisor <= n; divisor++)
        if (n % divisor == 0)
            return false;
    return true;
}

int main(void)
{
    int n;

    printf("Enter a number: ");
    scanf("%d", &n);

    if (is_prime(n))
        printf("%d is a prime\n", n);
    else
        printf("%d is not a prime\n", n);

    return 0;
}
