
#include <stdio.h>

int main(void)
{

    int number, factorial;
    double series, e;

    factorial = 1;
    series = 1.0f;
    e = 1.0f;

    printf("Enter a number: ");
    scanf("%d", &number);
    printf("\n1");

    int i, j;

    for (i = 1; i <= number; ++i) {
        for (j = 1; j <= i; ++j) {
            factorial *= i;
        }
        series = 1.0f / factorial;
        e += series;
        printf(" + %.4f (1/%f)", series, factorial);
        factorial = 1.0f;
    }

    printf(" is %.4f\n\n", e);



    return 0;
}
