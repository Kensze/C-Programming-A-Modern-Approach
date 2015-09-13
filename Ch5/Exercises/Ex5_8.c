/*
 * Name: Ex5_8.c
 * Purpose: Simplify if statements
 * Author: K Sze
 */

#include <stdio.h>
#include <stdbool.h>

int main(void)
{
  int age = 13;
  bool teenager;

  /* OLD
   * if (age >= 13)
   *  if (age <= 19)
   *    teenager = true;
   *  else
   *    teenager = false;
   *  else if ( age < 13)
   *    tennager = false;
   */

  /* NEW */
  if ( age >= 13 && age <= 19)
    teenager = true;
  else
    teenager = false;

  printf("Teenager : %d\n", teenager);

  return 0;
}
