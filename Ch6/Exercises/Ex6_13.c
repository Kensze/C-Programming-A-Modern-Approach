#include <stdio.h>

int main(void)
{
    int m = 150;
    for (int n = 0; m > 0; n++, m /= 2)
        printf("%d ", m);

    return 0;
}
