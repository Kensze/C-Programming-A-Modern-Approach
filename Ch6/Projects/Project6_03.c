/* Reduces fractions to lowest term */

#include <stdio.h>

int main(void)
{
    int numerator, denominator;
    int m, n, remainder;

    printf("Enter a fraction: ");
    scanf("%d/%d", &numerator, &denominator);
    m = numerator;
    n = denominator;

    while (n != 0) {
        remainder = m % n;
        m = n;
        n = remainder;
    }

    numerator /= m;
    denominator /= m;

    printf("In lowest terms: %d/%d\n", numerator, denominator);



    return 0;
}
