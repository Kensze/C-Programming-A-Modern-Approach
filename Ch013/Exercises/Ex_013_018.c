#include <stdio.h>

void remove_filename(char *url);

int main(void)
{
    char url[] = "http://www.knking.com/index.html";
    puts(url);
    remove_filename(url);
    printf("url is now %s\n", url);
}

void remove_filename(char *url)
{
    while (*url++);
    while (*url-- != '/');
    *++url = '\0';

    /*
    int len = 0;
    char *p = url;
    while (*p++)
        len++;

    char *i = url + len - 1;            // -1 so while loop doesnt terminate immedieatley
    printf("%p\n", i);
    while (*i--)
        if (*i == '/')
            *i = '\0';
    */
}
