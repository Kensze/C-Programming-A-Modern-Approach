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
    for (int i = 0; str[i] != '\0'; i++) {
        str[i] = toupper(str[i]);
    }
}
