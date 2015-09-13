/*
 * Name: Project6_09.c
 * Purpose: A program that calculates the remaining balance on a loan after the first, second and third payments
 * Author: K Sze
 */

#include <stdio.h>

int main(void)
{
    float amount, interest, monthly, balance;
    int number_payments;

    printf("Enter amount of loan: ");
    scanf("%f", &amount);
    printf("Enter interest rate: ");
    scanf("%f", &interest);
    printf("Enter monthly payment: ");
    scanf("%f", &monthly);

    printf("Enter number of payments: ");
    scanf("%d", &number_payments);

    balance = amount;
    interest = interest / 100.0f;

    for (int i = 1; i <= number_payments; i++) {
        balance  = balance - monthly + (balance * (interest/12.0f));
        printf("Balance remaining after %d payments: %.2f \n", i, balance);
    }


    return 0;
}
