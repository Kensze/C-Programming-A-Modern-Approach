#include <stdio.h>

#define DAYS  7
#define HOURS 24

int main(void)
{
    int n, row;
    const int *p;
    const int temperatures[DAYS][HOURS] = {[4][13] = 32};

    row = 4;
    for (p = temperatures[row]; p < temperatures[row] + HOURS; p++)
        printf("%d ", *p);
    printf("\n");
}

