#include <stdio.h>
#include <string.h>

int main(void)
{
    char string[1024];
    char ch;
    strcpy(string, "Hi there");
    puts(string);

    printf("Enter a sentence: ");

    char *p = &string[0];

    while ((ch = getchar()) != '\n')
        *p++ = ch;

    puts(string);

    return 0;
}
