/*
 * Name: Exercise15.c
 * Purpose: Follow values of variables after execution
 * Author: K Sze
 */

#include <stdio.h>

int main(void)
{
  int i, j;
  i = 1;
  j = 2;

  printf("i & j initial values : %d %d\n", i, j);

  i += j;

  printf("i += j : %d %d\n", i, j);

  i--;
  printf("i-- : %d %d\n", i, j);

  i * j / i;
  printf("i * j / i : %d %d\n", i, j);


  i % ++j;
  printf("i %% ++j : %d %d\n", i, j);

  return 0;
}

