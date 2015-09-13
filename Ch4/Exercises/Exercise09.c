/*
 * Name: Exercise09.c
 * Purpose: Show output produced by Compound Assignment
 * Author: K Sze
 */

#include <stdio.h>

int main(void)
{
  int i, j, k;

  i = 7, j = 8;
  i *= j + 1;                           /* i *= j + 1   i *= 9    i = 7*9   63 */
  printf("A: %d %d\n", i, j);

  i = j = k = 1;
  i += j += k;
  printf("B: %d %d %d\n", i, j, k);      /* i = j = k = 1    i += j += k   j += k    j = j + k  j = 1 + 1
                                         i += j    1 += 2   i = 3 */


  i = 1, j = 2, k = 3;
  /* i -= j -= k      j -= k    j = j -k    j = 2 - 3   j = - 1   i -= j   i -= -1   i = i -- 1    i = 2  */
  i -= j -= k;
  printf("C: %d %d %d\n", i, j, k);

  i = 2, j = 1, k = 0;
  /* i *= j *= k    j *= k  j = j * k   j = 0    i = 2 * 0 */
  i *= j *= k;
  printf("D: %d %d %d\n", i, j, k);




  return 0;
}
