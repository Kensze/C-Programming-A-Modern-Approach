/*
 * Name_ Ex5_3.c
 * Purpose: logical expression outputs
 * Author: K Sze
 */

#include <stdio.h>

int main(void)
{
  int i, j, k;

  /* A */
  i = 3, j = 4, k = 5;
  /* i < j || ++j < k ->   3 < 5 || ++4 < 5   -> 1 || 0  -> 1
   * i: 3  j: 5   k: 5  */
  printf("A: %d ", i < j || ++j < k);
  printf(": %d %d %d \n", i, j, k);


  /* B  */
  i = 7, j = 8, k = 9;
  /*  7 - 7 && 8++ < 9    ->    0 && 9 < 9   -> 0 && 1   ->  0 */
  printf("B: %d ", i - 7 && j++ < k);
  printf(": %d %d %d \n", i, j, k);

  /* C */
  i = 7, j = 8, k = 9;
  /*  (i = j) || (j = k)  ->  i = j -> i = 8 instead of 7 -> What happens with the or? Does not get executed beacuse first became true when it got assigned? Short circuiting */
  printf("C: %d ", (i = j) || (j = k));
  printf(": %d %d %d\n", i, j, k);


  /* D */
  i = 1, j = 1, k = 1;
  /* ++1 || ++1 && ++1    -> Whole OR is true beacuse the first ++1 is nonzero. The rest does not get executed beacuse of short circuting */
  printf("D: %d ", ++i || ++j && ++k);
  printf(": %d %d %d\n", i, j, k);



  return 0;
}
