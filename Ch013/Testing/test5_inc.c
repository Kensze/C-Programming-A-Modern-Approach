#include <stdio.h>
#include <stdbool.h>

char *mystrcat(char *s1, const char *s2);
bool isstringended(char *s1, int n);
size_t mystrlen(const char *p);

int main(void)
{
    char p[] = "abc";
    char c[] = "def";
    char *s = mystrcat(p, c);
    int len = mystrlen(s);
    char *j = s;
    /* s[len] = 's'; */                 /* commment out to get correctly ended string */

    printf("%s %d\n", isstringended(s, len) ? "Correctly ended" : "Not correctly ended", len);

    int i;
    for (i = 0; i <= len; i++)
      printf("%c", j[i]);

    /*
    while (*j) {
        printf("%c", *j);
        j++;
    }
    */
    printf("\n");

    return 0;
}

char *mystrcat(char *s1, const char *s2)
{
    char *p = s1;
    while (*p)
        p++;
    while ((*p++ = *s2++))          /* double surrounded to get rid of warnings from compiler */
        ;
    return s1;
}

bool isstringended(char *s1, int n)
{
    char *p = s1;

    for (; p <= s1 + n; p++) {
        printf("%c %2d \t %p\n", *p, *p, p);
        if (*p == '\0') {
            return true;
        }
    }
    return false;
}

size_t mystrlen(const char *p)
{
    size_t len = 0;

    while (*p++)
        len++;
    return len;
}
