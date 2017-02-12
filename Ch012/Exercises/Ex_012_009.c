/* a and b both point to arrays of length n, function should return
 * a[0] * b[0] + a[1] * b[1] + ... + a[n-1] * b[n-1] */

#include <stdio.h>

double inner_product(const double *a, const double *b, int n);

int main(void)
{
    const double a[] = {1, 2, 3};
    const double b[] = {4, -5, 6};
    int n = sizeof a / sizeof(a[0]);
    double const *aptr, *bptr;
    bptr = b;

    printf("Inner product of\n");
    for (aptr = a; aptr < a + n; aptr++, bptr++)
         printf("%3.2f\t%3.2f\n", *aptr, *bptr);
    printf("is : %.2f\n", inner_product(a, b, n));

    bptr = b;       /* reset bptr to point to first element of b */
    printf("\n");
    printf("Inner product of\n");
    for (aptr = a; aptr < a + n; aptr++, bptr++)
         printf("%3.2f * %3.2f + ", *aptr, *bptr);
    printf("is : %.2f\n", inner_product(a, b, n));


}

double inner_product(const double *a, const double *b, int n)
{
    double const *p, *j = b;
    double sum = 0;

    for (p = a; p < a + n; p++, j++)
        sum += *p * *j;

    return sum;
}
