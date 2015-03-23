/*
 * Name: Project02.c
 * Purpose: Nicely formats information entered by a user
 * Author: K Sze
 */

#include <stdio.h>

int main(void)
{
  int itemNum, month, day, year;
  float itemPrice;

  printf("Enter item number: ");
  scanf("%d", &itemNum);
  printf("Enter unit price: ");
  scanf("%f", &itemPrice);
  printf("Enter purchase date (mm/dd/yyyy): ");
  scanf("%d/%d/%d", &month, &day, &year);

  printf("Item \t\t Unit \t\t\t Purchase\n");
  printf("\t\t Price \t\t\t Date   \n");
  printf("%d\t\t $ %.2f \t\t %.2d/%d/%d\n", itemNum, itemPrice, month, day, year);



  return 0;
}
