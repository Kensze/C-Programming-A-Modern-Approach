#include <stdio.h>
#include <string.h>

int array_subscript(char *s, char *t);
int pointer_subscript(char *s, char *t);

int main(void)
{
    char s[10] = "Soccer";
    char t[10] = "soccer";

    printf("%d\n", array_subscript(s, t));
    printf("%d\n", pointer_subscript(s, t));

}

/* Array stcmp */

int array_subscript(char *s, char *t)
{
    int i;

    for (i = 0; s[i] == t[i]; i++)
        if (s[i] == '\0')
            return 0;
    return s[i] - t[i];
}

int pointer_subscript(char *s, char *t)
{
    char *i, *j;
    i = s;
    j = t;

    for (; *i == *j; i++, j++)
        if (*i == '\0')
            return 0;
    return *i - *j;
}
