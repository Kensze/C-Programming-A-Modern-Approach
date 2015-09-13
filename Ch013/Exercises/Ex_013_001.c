#include <stdio.h>

int main(void)
{
    /* A: Works */
    printf("%c", '\n');

    /* B: doesnt work beacuse " " is a string */
    // printf("%c", "\n");

    /* C: does not work beacuse ' ' is a char not a string */
    // printf("%s", '\n');

    /* D: works */
    printf("%s", "\n");

    /* E: we are not supplying a string to printf, putchar would be better */
    // printf('\n');

    /* F: works */
    printf("\n");

    /* G: works */
    putchar('\n');

    /* H: providing a string to a function expecting a char */
    // putchar("\n");

    /* I: providing char to function expecting a string */
    // puts('\n');

    /* J: works */
    puts("\n");

    /* K: works beacuse puts always do a newline even if one was not supplied*/
    puts("");
}
