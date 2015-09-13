
#include <stdio.h>

int num_digits(int n);

int main(void)
{
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);

    printf("%d have %d numbers\n", n, num_digits(n));

    return 0;
}

int num_digits(int n)
{
    int i = 0;

    do {
        n /= 10;
        i++;
    } while (n != 0);

    return i;
}
