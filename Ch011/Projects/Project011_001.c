/*
 * Name: Project_01
 * Purpose: Write a program that asks user to enter a U.S dollar ammount and then show that amount using the smallest number of $20, $10, $5 and $1 bills
 * Author: K Sze
 */

#include <stdio.h>

void pay_amount(int dollars, int *twenties, int *tens, int *fives, int *ones);

int main(void)
{
  int amount, sum;
  int twenties, tens, fives, ones;

  printf("Enter a dollar amount: ");
  scanf("%d", &amount);

  pay_amount(amount, &twenties, &tens, &fives, &ones);
  printf("$20 bills: %d\n", twenties);
  printf("$10 bills :%d\n", tens);
  printf("$5 bills :%d\n", fives);
  printf("$1 bills :%d\n", ones);

  return 0;
}

void pay_amount(int dollars, int *twenties, int *tens, int *fives, int *ones)
{
    *twenties  = dollars / 20;
    dollars -= *twenties * 20;

    *tens = dollars / 10;
    dollars -= *tens * 10;

    *fives = dollars / 5;
    dollars -= *fives * 5;

    *ones = dollars / 1;
}
