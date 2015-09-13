#include <stdio.h>
#include <string.h>

size_t mystrlen(const char *s);

int main(void)
{
    char s[] = "Testing string";
    printf("%s has %d chars\n", s, mystrlen(s));
}

size_t mystrlen(const char *s)
{
    const char *p = s;
    while (*s)
        s++;
    return s - p;
}
