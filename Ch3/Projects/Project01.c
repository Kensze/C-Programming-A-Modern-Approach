/*
 * Name: Project01.c
 * Purpose: Write a program that accepts a date from the user in the form mm/dd/yyy and then displays it in the form yyymmdd
 * Author: K Sze
 */

#include <stdio.h>

int main(void)
{
  int year, month, day;
  printf("Enter a date (mm/dd/yyyy): ");
  scanf("%d/%d/%d", &month, &day, &year);
  printf("You entered the date: %d%d%.2d\n", year, month, day);

  return 0;
}
