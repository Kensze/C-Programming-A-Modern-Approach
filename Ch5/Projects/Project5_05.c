/*
 * Name: Project5_05.c
 * Purpose: Calculate tax due of taxable income
 * Author: K Sze
 */

#include <stdio.h>

int main(void)
{
  int income, tax;

  printf("Enter amount of taxable income: ");
  scanf("%d", &income);

  if (income <= 750)
    tax = income * .01f;
  else if (income <= 2250)
    tax = 7.50f + (income - 750.00f) * .02f;
  else if (income <= 3750)
    tax = 37.50f + (income - 2250.00f) * .03f;
  else if (income <= 5250)
    tax = 82.50f + (income - 3750.00f) * .04f;
  else if (income <= 7000)
    tax = 142.50f + (income - 5250.00f) * .05f;
  else
    tax = 230 + (income - 7000.00f) * .06f;

  printf("Tax due: %d\n", tax);

  return 0;
}
