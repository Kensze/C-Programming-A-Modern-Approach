/*
 * Name: Project04.c
 * Purpose: Take an number and display it as an octal
 * Author: K Sze
 */

#include <stdio.h>

int main(void)
{
  int number, n1, n2, n3, n4, n5;

  printf("Enter a number between 0 and 32767: ");
  scanf("%d", &number);

  n1 = number % 8;
  number /= 8;

  n2 = number % 8;
  number /= 8;

  n3 = number % 8;
  number /= 8;

  n4 = number % 8;
  number /= 8;

  n5 = number % 8;


  printf("In octal, your number is: %d%d%d%d%d\n", n5, n4, n3, n2, n1);



  return 0;
}
