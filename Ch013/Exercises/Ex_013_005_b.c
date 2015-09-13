#include <stdio.h>
#include <ctype.h>
#include <string.h>

void capitalize(char *str);

int main(void)
{
    char mystr[] = "This is an arbitrary string with both chars and non chars \" \" {} ";
    capitalize(mystr);

    printf("%s\n", mystr);
}

void capitalize(char *str)
{
    char *p = str;

    while (*p) {
        *p = toupper(*p);
        p++;
    }
}
