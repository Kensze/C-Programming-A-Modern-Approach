#include <stdio.h>

int main(void)
{
    printf("A: 010E2 is an float and equals %.2f\n", 010E2);
    printf("B: 32.1E+5 is an float and equals %.4f\n", 32.1E+5);
    printf("C: 0790 is not valid because an octal can not have more than 8\n");
    printf("D: 100_000 is not a valid int \n");
    printf("E: 3.978e-2 is a float and equals %f\n", 3.978e-2);

    return 0;
}
