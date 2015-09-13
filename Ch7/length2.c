/* Determines the length of a messag */

#include <stdio.h>

int main(void)
{
    int len = 0;

    printf("Enter a message: ");
    while (getchar() != '\n')
        len++;
    if (len <= 1)
        printf("Your message was %d character long.\n", len);
    else
        printf("Your message was %d characters long.\n", len);


    return 0;
}
