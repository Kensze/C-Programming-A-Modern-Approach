/*
 * Name: Project02.c
 * Purpose: Ask the user to enter a three-digit number, then prints the number with its digits reversed
 * Author: K Sze
 */

#include <stdio.h>

int main(void)
{
  int number;

  printf("Enter a three-digit number: ");
  scanf("%d", &number);

  printf("The reversal is: %d%d%d\n", (number % 10), (number / 10 % 10), (number / 100));

  return 0;
}
