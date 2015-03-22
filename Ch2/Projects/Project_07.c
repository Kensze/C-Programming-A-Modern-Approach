/*
 * Name: Project_07
 * Purpose: Write a program that asks user to enter a U.S dollar ammount and then show that amount using the smallest number of $20, $10, $5 and $1 bills
 * Author: K Sze
 */

#include <stdio.h>

int main(void)
{
  int amount, sum;

  printf("Enter a dollar amount: ");
  scanf("%d", &amount);

  sum = amount / 20;
  printf("$20 bills: %d\n", sum);
  amount = amount - sum * 20;

  sum = amount / 10;
  printf("$10 bills: %d\n", sum);
  amount = amount - sum * 10;

  sum = amount / 5;
  printf("$5 bills:  %d\n", sum);
  amount = amount - sum * 5;

  sum = amount / 1;
  printf("$1 bills:  %d\n", sum);
  amount = amount - sum * 1;

  return 0;
}
