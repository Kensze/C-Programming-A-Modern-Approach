#include <stdio.h>

int main(void)
{
  int sum = 0;
  for (int i = 0; i < 10; i++) {
    if (i % 2)
      continue;
    sum += i;
  }
  printf("%d\n", sum);

  return 0;
}
