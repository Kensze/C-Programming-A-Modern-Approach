#include <stdio.h>

int *find_middle(int a[], int n);

int main(void)
{
    int a[] = {2,4,13,5,6};
    int n = sizeof a / sizeof(a[0]);
    int *p;

    printf("In array : ");
    for (p = a; p < a + n; p++)
        printf("%d ", *p);
    printf("the middle element is %d\n", *find_middle(a, n));
}

int *find_middle(int a[], int n)
{
    return  a + (n / 2);      // returns memory address of middle element in a
}
