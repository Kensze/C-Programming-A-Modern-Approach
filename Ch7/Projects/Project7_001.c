/* Prints a table of squares using a for loop */

#include <stdio.h>

int main(void)
{
  int i, n;

  printf("This program prints a table of squares.\n");
  printf("Enter number of entries in table: ");
  scanf("%d", &n);

  for (i = 1; i <= n; i++)
    printf("%10d\t%10d\n", i, i * i);

  printf("Breaks at 46341 beakse 46341^2 > than maximum value of an int\n");

  return 0;
}
