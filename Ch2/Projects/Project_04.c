/*
 * Name: Project_04
 * Purpose: A program that displays an amount with and without a 5% tax
 * Author: K Sze
 */

#include <stdio.h>

int main(void)
{
  float amount, tax;
  printf("Enter an amount: $");
  scanf("%f", &amount);
  tax = amount * 1.05f;
  printf("With tax added: $%.2f\n", tax);

  return 0;
}
