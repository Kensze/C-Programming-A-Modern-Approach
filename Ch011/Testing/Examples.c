#include <stdio.h>

void *multiply(int a, int b, int *c);


int main(void)
{
  int a, b;
  printf("Enter numbers: ");
  scanf("%d %d", &a, &b);

  int c = 0;
  multiply(a, b, &c);
  printf("%d\n", c);
}

/* Multiply a with b and stores result in pointer c */
void *multiply(int a, int b, int *c)
{
  *c = a * b;
}
