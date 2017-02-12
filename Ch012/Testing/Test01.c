#include <stdio.h>

void printArr(int a[], int n);
int arrLength(int a[]);

int main(void)
{
  int a[] = {11, 34, 82, 7, 64, 98, 47, 18, 79, 20};
  int *p;
  int n;

  n = sizeof a / sizeof(*a);

  printf("Elements in array: %d\n", n);
  printf("Size of array in bytes: %lu\n", sizeof(a));
  printf("Each element takes %lu bytes\n", sizeof(int));

  int sum = 0;
  /* Name of array points to first element of array */
  /* p = a is the same as p = &a[0] */
  for (p = a; p < a+n; p++) {
    printf("%p\t%d\n", p, sum);
    sum += *p;
  }

  printf("Total sum: %d\n", sum);
  return 0;
}

void printArr(int a[], int n) {
  //int s;
  int *p;
  /*
     for (s = 0; s < n; s++)
     printf("%d  ", a[s]);
  */

  for (p = a; p < a + n; p++)
    printf("%d  ", *p);
  printf("\n");
}
