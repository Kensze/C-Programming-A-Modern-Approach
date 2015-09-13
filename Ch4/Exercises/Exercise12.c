/*
 * Name: Project12.c
 * Purpose: Shows outputs from program fragments
 * Author: K Sze
 */

#include <stdio.h>

int main(void)
{
  int i, j;

  i = 5;
  j = ++i * 3 -2;
  /* 6 * 3 - 2   18 - 2   16    i becomes 6 */
  printf("A: %d %d\n", i, j);


  i = 5;
  j = 3 - 2 * i++;
  /*  3 - ( 2 * 5++)    3 - 10   j = -7   i = 6 */
  printf("B: %d %d\n", i, j);

  i = 7;
  j = 3 * i-- + 2;
  /*  j = 3 * 7-- + 2   j = 21 +2 = 23   i = 6 */
  printf("C: %d %d\n", i, j);

  i = 7;
  j = 3 + --i * 2;
  /*  j = 3 + 6 * 2    j = 3 + 12 = 15   i = 6 */
  printf("D: %d %d\n", i, j);

  return 0;
}
