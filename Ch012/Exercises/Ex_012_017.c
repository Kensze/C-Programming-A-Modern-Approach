#include <stdio.h>

#define ROWS 3
#define COLS 5

int sum_two_dimensional_array(const int *a, int n);

int main(void)
{
    const int a[ROWS][COLS] = {{1, 2, 3, 4, 5},
                               {6, 7, 8, 9, 10},
                               {11, 12, 13, 14, 15}};

    printf("Sum of two dimensional array: %d\n", sum_two_dimensional_array(a[0], ROWS * COLS));

}

int sum_two_dimensional_array(const int *a, int n)
{

    int sum;
    const int *p;
    sum = 0;

    for (p = a; p < a + n; p++)
        sum += *p;

    return sum;
}
