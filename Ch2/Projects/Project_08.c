/*
 * Name: Project_08
 * Purpose: A program that calculates the remaining balance on a loan after the first, second and third payments
 * Author: K Sze
 */

#include <stdio.h>

int main(void)
{
  float amount, interest, monthly, balance;
  printf("Enter amount of loan: ");
  scanf("%f", &amount);
  printf("Enter interest rate: ");
  scanf("%f", &interest);
  printf("Enter monthly payment: ");
  scanf("%f", &monthly);

  balance = amount;
  interest = interest / 100.0f;
  balance  = balance - monthly + (balance * (interest/12.0f));
  printf("Balance remaining after first payment: %.2f\n", balance);
  balance  = balance - monthly + (balance * (interest/12.0f));
  printf("Balance remaining after second payment: %.2f\n", balance);
  balance  = balance - monthly + (balance * (interest/12.0f));
  printf("Balance remaining after third payment: %.2f\n", balance);


  return 0;
}
