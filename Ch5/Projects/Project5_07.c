/*
 * Name: Project5_07.c
 * Purpose: Find the biggest and smallest numbers inputted by a user
 * Author: K Sze
 */

#include <stdio.h>

int main(void)
{
  int i1, i2, i3, i4;
  int smallest, biggest, smallest1, smallest2, biggest1, biggest2;

  printf("Enter four integers: ");
  scanf("%d %d %d %d", &i1, &i2, &i3, &i4);

  if (i1 > i2) {
    biggest1 = i1;
    smallest1 = i2;
  } else {
    biggest1 = i2;
    smallest1 = i1;
  }
  if (i3 > i4) {
    biggest2 = i3;
    smallest2 = i4;
  } else {
    biggest2 = i4;
    smallest2 = i3;
  }

  if (biggest1 > biggest2)
    biggest = biggest1;
  else
    biggest = biggest2;
  if (smallest1 < smallest2)
    smallest = smallest1;
  else
    smallest = smallest2;

  printf("Biggest: %d\n", biggest);
  printf("Smallest: %d\n", smallest);

  return 0;
}
