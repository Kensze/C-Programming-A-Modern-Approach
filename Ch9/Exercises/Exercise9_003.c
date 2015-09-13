
#include <stdio.h>

int gcd(int m, int n);

int main(void)
{
    int m, n;
    printf("Enter two numbers to calculate the GCD: ");
    scanf("%d%d", &m, &n);

    printf("GCD of %d and %d is: %d\n", m, n, gcd(m, n));

    return 0;
}

int gcd(int m, int n)
{
    int remainder;

    do {
        remainder = m % n;
        m = n;
        n = remainder;
    } while (n != 0);
    return m;
}
