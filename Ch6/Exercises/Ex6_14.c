#include <stdio.h>

int main(void)
{
    /* WRONG */
    if (n % 2 == 0);
        printf("n is even\n");

    /* Correct */
    if ( n % 2 == 0)
        printf("n is even\n");

    return 0;
}
