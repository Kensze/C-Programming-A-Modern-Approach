#include <stdio.h>

void store_zeros(int a[], int n);

int main(void)
{
    int a[] = {12,134,56,78};
    int n = sizeof a / sizeof(a[0]);
    int *p;

    printf("Before: ");
    for (p = a; p < a + n; p++)
        printf("%d ", *p);
    printf("\n");

    store_zeros(a, n);

    printf("After: ");
    for (p = a; p < a + n; p++)
        printf("%d ", *p);
    printf("\n");
}

void store_zeros(int a[], int n)
{
    int *p;
    for (p = a; p < a + n; p++)
        *p = 0;
}

/* Old
void store_zeros(int a[], int n)
{
    int i;

    for (i = 0; i < n; i++)
        a[i] = 0;
}
*/
