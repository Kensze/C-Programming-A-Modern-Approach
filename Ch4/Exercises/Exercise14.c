/*
 * Name: Exercise14.c
 * Purpose: Supply parenthesis to show how a C compiler would interpret expressions
 * Author: K Sze
 */

#include <stdio.h>

int main(void)
{
  int a, b, c, d, e;

  printf("a * b -c * d + e\t: (a * b) - (c * d) + e\n");
  printf("a / b % c / d\t\t: ((a / b) % (c / d))\n");
  printf("- a - b + c - + d \t: - a -b + c -(+d)\n");
  printf("a * - b / c - d \t: (( a * -(b / c) - d))\n");

  return 0;
}
