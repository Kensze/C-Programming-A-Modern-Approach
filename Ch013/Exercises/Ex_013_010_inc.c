#include <stdio.h>
#include <string.h>

char *duplicate(char *p);

int main(void)
{
    char *str = "Hi there";
    char *str1;
    str1 = duplicate(str);
    printf("%s\n", str1);

}

char *duplicate(char *p)
{
    char *q;            // not initialized and contains garbage value
    strcpy(q, p);
    return q;
}
