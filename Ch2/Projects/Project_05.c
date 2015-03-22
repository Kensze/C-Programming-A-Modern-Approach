/*
 * Name: Project_05
 * Purpose: Calculate a polynomial 3x^5 + 2x^4 - 5x^3 - x^2 + 7x -6
 * Author: K Sze
 */

#include <stdio.h>

int main(void)
{
  float x, polynomial;
  printf("Enter a value for x: ");
  scanf("%f", &x);

  polynomial = 3*(x*x*x*x*x) + 2*(x*x*x*x) - 5*(x*x*x) -(x*x) + 7*(x -6);

  printf("Result is: %.3f\n", polynomial);

  return 0;
}
