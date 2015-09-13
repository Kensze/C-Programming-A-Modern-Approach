#include <stdio.h>

int main(void)
{
    float number;
    float biggest = 0;

    do {
        printf("Enter a number: ");
        scanf("%f", &number);
        if (number > biggest)
            biggest = number;
    } while (number > 0);

    printf("Biggest: %.2f\n", biggest);

    return 0;
}
