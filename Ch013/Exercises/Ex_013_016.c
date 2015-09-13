#include <stdio.h>

int count_spaces(const char s[]);
int condensed_count_spaces(const char s[]);

int main(void)
{
    char *s = "When neccessary, it is possible to arrange for ";
    printf("count_spaces: %d\n", count_spaces(s));
    printf("condensed_count_spaces: %d\n", condensed_count_spaces(s));
}


int count_spaces(const char s[])
{
    int count = 0, i;

    for (i = 0; s[i] != '\0'; i++)
        if (s[i] == ' ')
            count++;
    return count;
}

int condensed_count_spaces(const char s[])
{
    int count = 0;

    while (*s)
        if (*s++ == ' ')
            count++;
    return count;
}
