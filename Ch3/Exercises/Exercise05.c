/*
 * Name: Exercise05.c
 * Purpose: scanf() behaviour experimenting
 * Author: K Sze
 */

#include <stdio.h>

int main(void)
{
  float x, y;
  int i;

  printf("Enter numbers: ");
  scanf("%f%d%f", &x, &i, &y);
  printf("x: %f\t i: %d\t y: %f\n", x, i, y);

  return 0;
}

/*
 * Output: x: 12.300000     i: 45   y: 0.600000
 * Explanation: i is an int and cannot contaion anything after the decimal point, what is after the decimal point of 45.6 will get put back and processed against the next call on which 0.6 gets assigned to y since it's a float
 */
