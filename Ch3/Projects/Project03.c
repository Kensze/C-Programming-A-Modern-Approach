/*
 * Name: Project_03.c
 * Purpose: Break down an ISBN number entered by a user
 * Author: K Sze
 */

#include <stdio.h>

int main(void)
{
  int gs1Prefix, groupIdentifier, publisherCode, itemNumber, checkDigit;
  printf("Enter ISBN: ");
  scanf("%d-%d-%d-%d-%d", &gs1Prefix, &groupIdentifier, &publisherCode, &itemNumber, &checkDigit);

  printf("GS1 prefix: %d\n", gs1Prefix);
  printf("Group identifier: %d\n", groupIdentifier);
  printf("Publisher code: %d\n", publisherCode);
  printf("Item number: %d\n", itemNumber);
  printf("Check digit: %d\n", checkDigit);


  return 0;
}
