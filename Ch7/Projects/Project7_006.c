/*
 * Name: Project7_006.c
 * Purpose: Show how many bytes using sizeof()
 * Author: K Sze
 */

#include <stdio.h>

int main(void)
{
    printf("Int %zu\n", sizeof(int));
    printf("Short %zu\n", sizeof(short));
    printf("Long %zu\n", sizeof(long));
    printf("Float %zu\n", sizeof(float));
    printf("Double %zu\n", sizeof(double));
    printf("Long Double %zu\n", sizeof(long double));
    return 0;
}
