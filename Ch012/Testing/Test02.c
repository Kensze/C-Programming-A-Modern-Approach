#include <stdio.h>

int main(void)
{
    int a[3][3], *p;

    for (p = &a[0][0]; p < &a[2][2]; p++) {
        *p = 0;
        printf("%d %d\n", a[*p][*p]);
    }
    printf("\n");

}
