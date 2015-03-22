/*
 * Name: Exercise02.c
 * Purpose: Calls to printf displaying a float in different formats
 * Author: K Sze
 */

#include <stdio.h>

int main(void)
{
  float x = 1337.456;

  printf("X is: %g\n", x);
  printf("A: %-8.1e\n", x);
  printf("B: %10.6e\n", x);
  printf("C: %-8.6f\n", x);
  printf("D: %6.0f\n", x);

  return 0;
}
