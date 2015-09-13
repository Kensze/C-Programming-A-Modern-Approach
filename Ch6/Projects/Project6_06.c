/*
 * Name: Project6_06.c
 * Purpose: Show even squares between 1 trough n
 * Author: K Sze
 */

#include <stdio.h>

int main(void)
{
    int number;

    printf("Enter a number: ");
    scanf("%d", &number);

    for (int i = 0; i * i <= number; i += 2) {
        printf("%d\n", i * i);
    }


    return 0;
}
