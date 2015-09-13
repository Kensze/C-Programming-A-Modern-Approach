/* function will return a pointer to the arrays largest element */

#include <stdio.h>

int *find_largest(int a[], int n);

int main(void)
{
    int a[] = {1,2,21,3,4,125,27,261};
    int n = sizeof a / sizeof(a[0]);
    int *largest = find_largest(a, n);

    printf("Out of ");
    for (int i = 0; i < n; ++i)
        printf("%d ", a[i]);
    printf(": %d is largest and is at mem %p\n", *largest, &largest);
}

int *find_largest(int a[], int n)
{
    int i, largest;
    i = largest = 0;
    int id = 0;
    for (i = 0; i < n; ++i) {
        if (a[i] > largest) {
            id = i;
            largest = a[i];
        }
    }
    return &a[id];
}
