#include <stdio.h>

void swap(int *p, int *q);

int main(void)
{
    int i = 45, j = 51;

    printf("i is %d, j is %d\n", i, j);

    swap(&i, &j);

    printf("After swap, i is %d, j is %d\n", i, j);

}

void swap(int *p, int *q)
{
    int tmp;

    tmp = *p;
    *p = *q;
    *q = tmp;
}
