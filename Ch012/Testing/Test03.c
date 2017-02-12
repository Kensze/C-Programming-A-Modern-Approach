#include <stdio.h>

int main(void)
{
  int a[3][3] = {{1,2,3},{1,3,2}};
  int *p, i;

  /* outputs one row of a multidimensonal array using pointers */
  for (p = a[0]; p < a[0] + 3; p++) {
    for (p = a[1]; p < a[1] + 3; p++)
      printf("%d\n", *p);
  }
}
