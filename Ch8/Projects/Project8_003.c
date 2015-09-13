/* Checks numbers for repeated digits */

#include <stdbool.h>    /* C99 only */
#include <stdio.h>

int main(void)
{
    bool digit_seen[10] = {false};
    int digit;
    long n;


    printf("Enter a number: ");
    scanf("%ld", &n);

    while (n > 0) {
        while (n >= 0) {
            digit = n % 10;
            if (digit_seen[digit])
                break;
            digit_seen[digit] = true;
            n /= 10;
        }
        if (n > 0)
            printf("Repeated digit\n");
        else
            printf("No repeated digit\n");

        /* Reset array to allow for continous working on new input */
        for (int i = 0; i < sizeof(digit_seen) / sizeof(digit_seen[0]); i++)
            digit_seen[i] = false;

        printf("Enter a number: ");
        scanf("%ld", &n);
    }

    return 0;
}
