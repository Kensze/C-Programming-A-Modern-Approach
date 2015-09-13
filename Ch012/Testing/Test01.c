#include <stdio.h>

int main(void)
{
    int a[] = {11, 34, 82, 7, 64, 98, 47, 18, 79, 20};
    int sum, *p;

    int n;
    n = sizeof a / sizeof(a[0]);
    printf("Size of array in bytes: %d\n", sizeof a);

    sum = 0;
    /*
    for (p = &a[0]; p < &a[n]; p++) {
        printf("%p\t%d\n", p, sum);
        sum += *p;
    }
    */

    printf("%p\n", a); /* Name of array points to first element */

    /* Name of array points to first element of array */
    /* p = a is the same as p = &a[0] */
    for (p = a; p < a+n; p++) {
        printf("%p\t%d\n", p, sum);
        sum += *p;
    }
    printf("Total sum: %d\n", sum);
    return 0;
}

