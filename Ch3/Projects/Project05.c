/*
 * Name: Project05.c
 * Purpose: Write a program that asks a user to enter numbers 1 trough 16(in any order)
 * and display them in a 4 x 4 arrangement. Then show the sums of the rows, coloumns and diagonals
 * Author: K Sze
 */

#include <stdio.h>

int main(void)
{

  int one, two, three, four, five, six, seven, eight, nine, ten, eleven, twelve, thirteen, fourteen, fiftheen, sixtheen;
  int row1, row2, row3, row4;
  int coloumn1, coloumn2, coloumn3, coloumn4;
  int diagonal1, diagonal2;

  printf("Enter the numbers 1 trough 16 in any order:\n");
  scanf("%d %d %d %d %d %d %d %d %d %d %d %d %d %d %d %d",
      &one, &two, &three, &four, &five,
      &six, &seven, &eight, &nine, &ten, &eleven, &twelve,
      &thirteen, &fourteen, &fiftheen, &sixtheen);


  printf("%d\t %d\t %d\t %d\n", one, two, three, four);
  printf("%d\t %d\t %d\t %d\n", five, six, seven, eight);
  printf("%d\t %d\t %d\t %d\n", nine, ten, eleven, twelve);
  printf("%d\t %d\t %d\t %d\n", thirteen, fourteen, fiftheen, sixtheen);
  printf("\n");

  row1 = one + two + three + four;
  row2 = five + six + seven + eight;
  row3 = nine + ten + eleven + twelve;
  row4 = thirteen + fourteen + fiftheen + sixtheen;

  printf("Row sums: %d %d %d %d\n", row1, row2, row3, row4);

  coloumn1 = one + five + nine + thirteen;
  coloumn2 = two + six + ten + fourteen;
  coloumn3 = three + seven + eleven + fiftheen;
  coloumn4 = four + eight + twelve + sixtheen;

  printf("Coloumn sums: %d %d %d %d\n", coloumn1, coloumn2, coloumn3, coloumn4);

  diagonal1 = thirteen + ten + seven + four;
  diagonal2 = sixtheen + eleven + six + one;

  printf("Diagonal sums: %d %d\n", diagonal1, diagonal2);


   return 0;
}
