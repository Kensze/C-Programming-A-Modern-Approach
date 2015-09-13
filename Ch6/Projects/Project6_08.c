/*
 * Name: Project6_08.c
 * Purpose: Print a one month calendar
 * Author: K Sze
*/

#include <stdio.h>

int main(void)
{
    int days, start;

    printf("Enter number of days in the month: ");
    scanf("%d", &days);

    printf("Enter starting day of week (1=Sun, 7=Sat): ");
    scanf("%d", &start);
    start -= 1;

    for (int i = 0; i < start; i++)
        printf("    ");

    for (int i = 1; i <= days; i++) {
        if (start % 7 == 0)
           printf("\n");
        printf("%3d ", i);
        start++;
    }
    printf("\n");

    return 0;
}
