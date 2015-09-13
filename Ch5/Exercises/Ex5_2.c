/*
 * Name Ex5_2.c
 * Purpose: Outputs of logical operators
 * Author: K Sze
 */

#include <stdio.h>

int main(void)
{
  int i, j, k;

  i = 10, j = 5;
  /*  !i < j -> !10 < 5 -> 10 is not smaller than 5 -> true */
  printf("A: !10 < 5  \t\t%d < %d: \t%d\n", i, j, (!i < j));


  i = 2, j = 1;
  /* !!i + !j  -> !i = 0 -> i = 1 -> 1 + 0 -> 1 */
  printf("B: !!2 + !1  \t\t%d + %d: \t\t%d\n", !!i, !j, !!i + !j);


  i = 5, j = 0, k = -5;
  /* i && j || k -> 5 && 0 || -5 -> 5 && 0 is false since not both not both of them is nonzero -> 0 | -5 becomes true beacuse -5 is nonzero  */
  printf("C: 5 && 0 || -5: \t%d || -5 \t%d\n", i && j, i && j || k);

  i = 1, j = 2, k = 3;
  /* i < j || k   ->   1 < 2 || 3 ->  1 < 2 is true ->  1  */
  printf("C: 1 < 2 || 3: \t\t%d || 3 \t\t%d\n", i < j, i < j || k);



  return 0;
}

