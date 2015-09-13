
#include <stdio.h>

int digit(int n, int k);

int main(void)
{
    int n, k;

    printf("Enter two digits: ");
    scanf("%d%d", &n, &k);

    printf("The kth number %d in %d is %d\n", k, n, digit(n, k));

    return 0;
}

int digit(int n, int k)
{
    int m;
    do {
        m = n % 10;
        n /= 10;
        k--;
    } while (k > 0);

    return m;
}
