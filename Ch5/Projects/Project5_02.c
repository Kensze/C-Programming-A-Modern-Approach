/*
 * Name: Project5_02.c
 * Purpose: A program that converts 24-hour time to 12-hour form
 * Author: K Sze
 * Notes: Be careful not to display 12.00 as 00.00
 */

#include <stdio.h>

int main(void)
{
  int hour, minutes;

  printf("Enter a 24-hour time: ");
  scanf("%d:%d", &hour, &minutes);

  if (hour == 0)
    printf("The equivalent 12-hour: 12:%.2d am\n", minutes);
  else if (hour == 12)
    printf("The equivalent 12-hour: 12:%.2d pm\n", minutes);
  else if (hour > 12)
    printf("The equivalent 12-hour: %d:%.2d pm\n", hour - 12, minutes);
  else if (hour < 12)
    printf("The equivalent 12-hour: %d:%.2d am\n", hour, minutes);


  return 0;
}
