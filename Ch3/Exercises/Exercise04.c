/*
 * Name: Exercise04.c
 * Purpose: scanf() testing
 * Author: K Sze
 */

#include <stdio.h>

int main(void)
{
  int i, j;
  float x;

  printf("Enter numbers: ");
  scanf("%d%f%d", &i, &x, &j);
  printf("i: %d\t x: %f\t j: %d\n", i, x, j);

  return 0;
}

/* i: 10    x: 0.300000     j: 5 are the values beacuse int i can't have any digits after the decimal point, which gets stored to the next call and the 6 is disregarded completly */

