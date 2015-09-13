/* Reverses a series of numbers */

#include <stdio.h>

#define N 3
#define A_LENGTH (int)(sizeof(a) / sizeof(a[0]))

int main(void)
{
    int a[N], i;

    printf("Enter %d numbers: ", N);
    for (i = 1; i <= A_LENGTH; i++)
        scanf("%d", &a[i]);

    printf("In reverse: ");
    for (i = A_LENGTH; i > 0; i--)
        printf("%d ", a[i]);
    printf("\n");

}
