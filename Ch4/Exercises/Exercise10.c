/*
 * Name: Project10.c
 * Purpose: Show output from fragments of code
 * Author: K Sze
 */

#include <stdio.h>

int main(void)
{
  int i,j;

  i = 6;
  j = i += j;
  /* j = i += j   i = i + j   i = 6 and so is j beacuse it gets assigned to the same as i*/
  printf("A: %d %d\n", i, j);

  i = 5;
  j = (i -= 2) + 1;
  /* i = i - 2   i = 5 - 2  i = 3  j = 3 + 1  */
  printf("B: %d %d\n", i, j);

  i = 7;
  j = 6 + (i = 2.5);
  /* j = 6 + (i = 2)    j = 8    i = 2 */
  printf("C: %d %d \n", i, j);


  i = 2, j = 8;
  j = (i = 6) + (j = 3);
  /*  j = (i = 6) + (j = 3)   j = 6 + 3   j = 9   i = 6  */
  printf("D: %d %d \n", i, j);

  return 0;
}
