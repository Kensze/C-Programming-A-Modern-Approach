/* Reverses a series of numbers */

#include <stdio.h>

#define N 3

int main(void)
{
    int a[N], i;

    printf("Enter %d numbers: ", N);
    for (i = 1; i <= N; i++)
        scanf("%d", &a[i]);

    printf("In reverse: ");
    for (i = N; i > 0; i--)
        printf("%d ", a[i]);
    printf("\n");

}
