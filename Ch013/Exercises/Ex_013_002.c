#include <stdio.h>

int main(void)
{
    char *p = "abc";

    /* A: doesnt work, we should not supply a string when it expects a char */
    //putchar(p);

    /* B: Will output the first char from the string since *p points to first array element
     * We need to dereference it beacuse p is a pointer */
    putchar(*p);

    /* C: works */
    puts(p);

    /* D: doesnt work beacuse probably puts is implemented expecting a pointer to an array
     * and will print each array element until a string terminator is found, instead it 
     * gets an int and no terminator */
    // puts(*p);

    printf("%p %c\n", p, *p);

    while (*p) {
        printf("%c", *p);
        p++;
    }
    printf("\n");

    printf("%c\n", *--p);
}
