#include <stdio.h>

int sum_array(const int a[], int n);


int main(void)
{
    int a[] = {3,2,3};
    int n = sizeof a / sizeof(a[0]);

    printf("Sum of ");
    for (int i = 0; i < n; i++)
        printf("%d ", a[i]);
    printf("is %d\n", sum_array(a, n));
}

int sum_array(const int a[], int n)
{
    int sum = 0;
    const int *p;
    for (p = a; p < a + n; p++)
        sum += *p;
    return sum;
}

/*
int sum_array(const int a[], int n)
{
    int i, sum;
    sum = 0;
    for (i = 0; i < n; i++)
        sum += a[i];

    return sum;
}
*/
