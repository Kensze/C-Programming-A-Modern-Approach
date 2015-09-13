/*
 * Name: Project5_03.c
 * Purpose:
 * Author: K Sze
 */

#include <stdio.h>

int main(void)
{
  int speed;

  printf("Enter wind speed(knots): ");
  scanf("%d", &speed);

  if (speed < 1)
    printf("The wind is calm\n");
  else if (speed <= 3)
    printf("The wind is light air\n");
  else if (speed <= 27)
    printf("The wind is breeze\n");
  else if (speed <= 47)
    printf("The wind is gale \n");
  else if (speed <= 63)
    printf("The wind is storm \n");
  else
    printf("The wind is hurricane \n");




  return 0;
}
