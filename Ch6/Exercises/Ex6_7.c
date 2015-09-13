#include <stdio.h>

int main(void)
{
  int i = 9384;

  for(; i > 0; i/=10)
    printf("%d ", i);

  return 0;
}
