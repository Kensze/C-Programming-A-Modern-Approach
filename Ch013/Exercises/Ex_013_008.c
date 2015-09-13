#include <stdio.h>
#include <string.h>

int main(void)
{
    char str[10];

    strcpy(str, "tire-bouchon");
    strcpy(&str[4], "d-or-wi");
    strcat(str, "red?");

    puts(str);
}
