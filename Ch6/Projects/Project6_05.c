/*
 * Name: Project6_05.c
 * Purpose: Ask the user to enter a n-digit number, then prints the number with its digits reversed
 * Author: K Sze
 */

#include <stdio.h>

int main(void)
{
    int number;

    printf("Enter a number: ");
    scanf("%d", &number);

    printf("The reversal is: ");

    while (number > 0) {
        printf("%d", number % 10);
        number /= 10;
    }

    printf("\n");

    return 0;
}
