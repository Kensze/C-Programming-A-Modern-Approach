
#include <stdio.h>

int check(int x, int y, int n);

int main(void)
{
    int x, y, n;
    printf("Enter three numbers: ");
    scanf("%d%d%d", &x, &y, &n);

    printf("Result: %d\n", check(x, y, n));

    return 0;
}


int check(int x, int y, int n)
{
    if ((x && y >= 0) && (x && y <= n -1))
        return 1;
    return 0;
}

