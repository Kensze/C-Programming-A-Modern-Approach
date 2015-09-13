/* Checks numbers for repeated digits */

#include <stdio.h>

int main(void)
{
    int digit_repeated[10] = {0};
    int digit;
    long n;

    printf("Enter a number: ");
    scanf("%ld", &n);

    while (n > 0) {
        digit = n % 10;
        digit_repeated[digit] += 1;
        n /= 10;
    }

    printf("Repeated digit(s): ");
    for (int i = 0; i < 10; i++) {
        if (digit_repeated[i] > 1)
            printf("%d ", i);
    }
    printf("\n");
}
