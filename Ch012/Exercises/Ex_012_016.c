#include <stdio.h>

#define DAYS  7
#define HOURS 24

int find_largest(int a[], int n);


// Should print highest temp for each day of the week
int main(void)
{
    int *p;
    int temperatures[DAYS][HOURS] = {[1][10] = 25, [1][17] = 23, [2][13] = 32, [2][15] = 40,
                                     [4][13] = 32};
    for (int i = 0; i < 7; i++)
        printf("%d ", find_largest(temperatures[i], 24));
    printf("\n");
}

int find_largest(int a[], int n)
{
    int *p, largest;
    largest = 0;

    for (p = a; p < a + n; p++)
        if (*p > largest)
            largest = *p;

    /* subcript version */
    /*
    int i, max;
    max = a[0];

    for (i = 0; i < n; i++)
        if (a[i] > max)
            largest = a[i];
    */

    return largest;
}

