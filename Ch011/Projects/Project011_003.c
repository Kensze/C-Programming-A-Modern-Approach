/* Reduces fractions to lowest term */

#include <stdio.h>

void reduce(int numerator, int denominator, int *reduced_numerator, int *reduced_denominator);

int main(void)
{
    int numerator, denominator;
    int reduced_denominator, reduced_numerator;

    printf("Enter a fraction: ");
    scanf("%d/%d", &numerator, &denominator);
    reduce(numerator, denominator, &reduced_numerator, &reduced_denominator);
    printf("In lowest terms: %d/%d\n", reduced_numerator, reduced_denominator);

    return 0;
}

void reduce(int numerator, int denominator, int *reduced_numerator, int *reduced_denominator)
{
    int m, n, remainder;
    m = numerator;
    n = denominator;

    while (n != 0) {
        remainder = m % n;
        m = n;
        n = remainder;
    }
    printf("%d\t%d\n", numerator, denominator);
    numerator /= m;
    denominator /= m;
    printf("%d\t%d\n", numerator, denominator);

    *reduced_numerator = numerator;
    *reduced_denominator = denominator;
}
