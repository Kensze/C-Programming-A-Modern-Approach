/*
 * Name: Ex5_9.c
 * Purpose: Are the following if statements equal?
 * Author: K Sze
 */

#include <stdio.h>

int main(void)
{
  int score = 86;

  /* First if statement */
  if (score >= 90)
    printf("A");
  else if (score >= 80)
    printf("B");
  else if (score >= 70)
    printf("C");
  else if (score >= 60)
    printf("D");
  else
    printf("F");

  /* Second if statement */
  if (score < 60)
    printf("F");
  else if (score < 70)
    printf("D");
  else if (score < 80)
    printf("C");
  else if (score < 90)
    printf("B");
  else
    printf("A");


  return 0;
}
