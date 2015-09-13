/*
 * Name: Exercise02.C
 * Purpose: If i and j are positive integers, does (-i)/j always have the same value as -(i/j)?
 * Author: K Sze
 */

#include <stdio.h>

int main(void)
{
  int i = 10, j = 2;

  printf("(-%d)/%d: %d\n", i, j, (-i)/j);
  printf("-(%d/%d): %d\n", i, j, -(i/j));

  return 0;
}
