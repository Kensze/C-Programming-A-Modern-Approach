#include <stdio.h>

void print(int *d);

int main(void)
{
    int d;
    print(&d);
    printf("%d\n", d);
    return 0;
}

void print(int *d)
{
    int i = 0;
    for (; i < 10; i++)
        *d = i;
}
