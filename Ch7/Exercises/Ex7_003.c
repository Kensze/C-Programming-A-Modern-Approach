#include <stdio.h>

int main(void)
{
    short unsigned int a = 1;
    /* short float b = 1.1; */
    long double c = 2.2;
    unsigned long d = 399;

    printf("A: Short unsigend int %d: \n", a);
    printf("B: short float \t\t is not a legal type\n");
    printf("C: long double %d: \n", c);
    printf("D: unsigned long %ld: \n", d);


    return 0;
}
