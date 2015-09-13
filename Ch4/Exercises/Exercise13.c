/*
 * Name: Exercise13.c
 * Purpose: Find out which expression between ++i and i++ is exactly the same as i += 1
 * Author: K Sze
 */

#include <stdio.h>

int main(void)
{
  int i = 10;
  /* i += 1   i += 1   i = 10 + 1 */
  printf("i += 1: %d\n", i += 1);

  i = 10;
  /* This is the same because i needs to increment before */
  printf("++i: %d\n", ++i);

  i = 10;
  printf("i++: %d\n", i++);

  return 0;
}

