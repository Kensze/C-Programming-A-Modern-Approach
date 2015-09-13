/*
 * Name: Exercise11.c
 * Purpose: Shows output produced by program fragments
 * Author: K Sze
 */

#include <stdio.h>

int main(void)
{
  int i, j, k;

  i = 1;
  /*  i++ - 1   i won't increment directly since it's a postfix operator, so it will return 0 */
  printf("A: %d \n", i++ - 1);


  i = 10, j = 5;
  /*    i++ - ++j   10++ - ++5    10++ - 6   will output 4, i will increment to 11 and j becomes 6 */
  printf("B: %d \n", i++ - ++j);
  printf("B: %d %d\n", i, j);


  i = 7, j = 8;
  /*  i++ - --j   7++ - 7   outputs 0,  i becomes 8 after. j stays at 7*/
  printf("C: %d \n", i++ - --j);
  printf("C: %d %d \n", i, j);

  i = 3, j = 4, k = 5;
  /*  i++ - j++ + --k     3++ - 4++ + 4   -1 + 4 = 3  i becomes 4, j becomes 5 k stays at 4 */
  printf("D: %d \n", i++ - j++ + --k);
  printf("D: %d %d %d \n", i, j, k);


  return 0;
}
