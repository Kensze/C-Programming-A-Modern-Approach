/*
 * Name: Project5_01.c
 * Purpose: Write a program that calculates how many digits a number contains
 * Author: K Sze
 * Notes: Use if statements to test the number, if number is between 0 and 9 it has one digit, between 10 and 99 it has 2 digits
 */

#include <stdio.h>

int main(void)
{
  int number, digits;

  printf("Enter a number: ");
  scanf("%d", &number);

  if (number >= 1 && number <= 9)
  printf("The number %d has 1 digit\n", number);
  else if (number >= 10 && number <= 99)
    printf("The number %d has 2 digits\n", number, digits);
  else if (number >= 100 && number <= 999)
    printf("The number %d has 3 digits\n", number, digits);


  return 0;
}
