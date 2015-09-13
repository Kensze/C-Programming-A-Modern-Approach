/*
 * Name: Project05.c
 * Purpose: Evaluation of expression in C89
 * Author: K Sze
 */

#include <stdio.h>

int main(void)
{
  int i, j;

  i = 8, j = 5;
  printf("%d %% %d: %d\n", i, j, i%j);

  i = -8, j = 5;
  printf("%d %% %d: %d\n", i, j, i%j);

  i = 8, j = -5;
  printf("%d %% %d: %d\n", i, j, i%j);

  i = -8, j = -5;
  printf("%d %% %d: %d\n", i, j, i%j);

  return 0;
}
