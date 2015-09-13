/*
 * Name: Ex5_1.c
 * Purpose: Show output produced by relational and equality operators
 * Author: K Sze
 */

#include <stdio.h>

int main(void)
{
  int i, j, k;

  i = 2, j = 3;
  /* k = i * j == 6 -> i * j = 6 -> 6 == 6 -> true -> 1 */
  k = i * j == 6;
  printf("A: %d * %d == 6 \t\t%d\n", i, j, k);

  i = 5, j = 10, k = 1;
  /* gets interpeted as (k > i) < j -> (1 > 5) false ->  (0) < j -> 0 < 10 -> true -> 1 */
  printf("B: %d > %d < %d  \t\t%d\n", k, i, j,  k > i < j);


  i = 3, j = 2, k = 1;
  /*  i < j == j < k   ->  3 < 2 == 2 < 1  -> 1 == 1 -> true   */
  printf("C: %d < %d == %d < %d \t%d\n", i, j ,j, k, (i < j == j < k));


  i = 3, j = 4, j = 5;
  /*  3 % 4 + 3 < k   ->  3 + 3 < 5  -> false -> 0  */
  printf("D: %d %% %d + %d < %d \t%d\n", i, j, i, k, (i % j + i < k));


  return 0;
}
