/*
 * Name: Ch3/Exercise01.c
 * Purpose: What output does following calls produce
 * Author: K Sze
 */

#include <stdio.h>

int main(void)
 {
   printf("A:\t %6d,%4d\n", 86, 1040);
   printf("B:\t %12.5e\n", 30.253);
   printf("C:\t %.4f\n", 83.162);
   printf("D:\t %-6.2g\n", .0000009979);

   return 0;
 }
