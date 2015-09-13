#include <stdio.h>

#define N 10

int main(void)
{
    int a[N] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int *p = &a[0], *q = &a[N-1], temp;

    printf("Before: ");
    for (int i = 0; i < N; i++)
        printf("%d ", a[i]);
    printf("\n");

    // comments inside while regard the first run of the loop
    while (p < q) {     // p = a[0] < q = a[9]
        temp = *p;      // temp = *p, temp -> 1
        *p++ = *q;      // set current *p to current *q then increment *p, *p = *q, a[0] = a[9]
        *q-- = temp;    // set current *q to temp and decrement *q, *q = 1
        // *q is now &a[1], *q is &a[8], contents of a[0] has swapped with a[9]
    }
    // My prediction is that it will reverse the array, ie a = {10,9,8} etc

    printf("After: ");
    for (int i = 0; i < N; i++)
        printf("%d ", a[i]);
    printf("\n");

}
