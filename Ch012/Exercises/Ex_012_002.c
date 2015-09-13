#include <stdio.h>

int main(void)
{
    int a[] = {1, 2, 6, 12}, *high, *low, *middle;
    high = &a[3];
    low =  a;
    printf("High: %p %d, low %p %d\n", high, *high, low, *low);

    /* middle = (low + high) / 2; */

    middle = (*low + *high) / 2;

    printf("middle: %d\n", middle);
}
