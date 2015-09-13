#include <stdio.h>
#include <string.h>

int strlen1(char p[]);

int main(void)
{
    char p[] = "June 14";
    printf("%s has length: %d or %lu\n", p, strlen1(p), strlen(p));

    char *ptr = p;
    while (*ptr != '\0') {
        printf("%c", *ptr);
        ptr++;
    }
    printf("\n");

    char *s = "Hi there";
    printf("%s\n", s);

}

int strlen1(char p[])
{
    int len;

    for (len = 0; *p != '\0'; p++)
        len++;

    return len;
}
