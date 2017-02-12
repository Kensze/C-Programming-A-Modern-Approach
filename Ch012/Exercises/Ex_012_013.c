#include <stdio.h>

int main(void)
{

  double ident[10][10], *p;
  int zeros = 10;

  for (p = &ident[0][0]; p < &ident[9][10]; p++)
    if (zeros == 10) {
      *p = 1.0;
      zeros = 0;
    } else {
      *p = 0.0;
      zeros++;
    }

  for (p = ident[0]; p < ident[1]; p++)
    *p = 2.0;

  int i, j;
  for (i = 0; i < 10; i++) {
    for (j = 0; j < 10; j++) {
      printf("%.0f ", ident[i][j]);
    }
    printf("\n");
  }


}
