#include <stdio.h>

int main(void)
{
  int i = 1;

  for(; i <= 128; i*=2)
    printf("%d ", i);

  return 0;
}
