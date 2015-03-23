/*
 * Name: Project04.c
 * Purpose: A program that converts a phone number from (xxx) xxx-xxxx to the form xxx.xxx.xxxx
 * Author: K Sze
 */

#include <stdio.h>

int main(void)
{
  int firstGroup, secondGroup, thirdGroup;

  printf("Enter phone number [(xxx) xxx-xxxxx]: ");
  scanf("(%d) %d-%d", &firstGroup, &secondGroup, &thirdGroup);

  printf("You entered: %d.%d.%d\n", firstGroup, secondGroup, thirdGroup);

  return 0;
}
