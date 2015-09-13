/*
 * Name: Project06.c
 * Purpose: Calculate European EAN check digit
 * Author: K Sze
 */

#include <stdio.h>

int main(void)
{
  int d1, d2, d3, d4, d5, d6, d7, d8, d9, d10, d11, d12, check;

  printf("Enter the first 12 digits of an EAN: ");
  scanf("%1d%1d%1d%1d%1d%1d%1d%1d%1d%1d%1d%1d", &d1, &d2, &d3, &d4, &d5, &d6, &d7, &d8, &d9, &d10, &d11, &d12);

  int first_sum, second_sum, total;

  first_sum = d2 + d4 + d6 + d8 + d10 + d12;
  second_sum = d1 + d3 + d5 + d7 + d9 + d11;

  total = first_sum * 3 + second_sum;
  total -= 1;

  total %= 10;
  check = 9 - total;

  printf("Check digit: %d\n", check);

  return 0;
}
