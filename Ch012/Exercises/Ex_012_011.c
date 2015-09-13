/* Page 265 */

#include <stdio.h>

int find_largest(int a[], int n);

int main(void)
{
    int a[] = {2,5,13,56,891,76,321};
    int n = sizeof a / sizeof(a[0]);

    printf("Out of ");
    for (int i = 0; i < n; i++)
        printf("%d ", a[i]);
    printf("\n");
    printf("%d is largest\n", find_largest(a, n));
}

int find_largest(int a[], int n)
{
    int *p, largest = 0;

    for (p = a; p < a + n; p++)
        if (*p > largest)
            largest = *p;

    return largest;
}
