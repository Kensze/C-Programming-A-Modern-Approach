#include <stdio.h>

int main(void)
{
    char c = 'a';
    int i = 10;

    printf("A: i+=c %d\n", i+=c);
    printf("B: c = 2 * c -1: %d\n", 2 * c - 1);
    printf("C: putchar(c) %d\n", putchar(c));
    printf("D: printf(c): %d\n", printf("c"));
    printf("D is illegal since printf requires a string as first argument and not a character\n");

        return 0;
}
