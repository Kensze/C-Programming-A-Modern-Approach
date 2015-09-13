/*
 * Name: Project5_08.c
 * Purpose: Write a program that asks user to enter a time in 24-hour form, the program then displays the departure and arrival times for the flight whose departure time
 * is closer to the one entered by the user
 *
 * Author: K Sze
 * Example: Enter a 24-hour time: 13:15
 *          Closest departure time is 12:47 p.m., arriving at 3.00 pm
 *
 * Notes: Convert input into a time expressed in minutes since midnight, compare it to the departure times also expressed since midnight
 *
 */

#include <stdio.h>

int main(void)
{
  int hour, minutes, since_midnight, 8_am, 9_43am, 11_19am, 12_47pm, 2_pm, 3_45_pm, 7_pm, 9_45pm;

  printf("Enter a 24-hour time: ");
  scanf("%d:%d", hour, minutes);

  since_midnight = hour * 60 + minutes;
  8_am = 8 * 60;
  9_43am = 9 * 60 + 43;
  12_47pm = 12 * 50 + 47;
  2_pm = 2 * 60;
  3_45pm = 3 * 60 + 45;
  7_pm = 7 * 60;
  9_45pm = 9 * 60 + 45;

  if (since_midnight >= 1 && since_midnight > 8_am)



  return 0;
}
