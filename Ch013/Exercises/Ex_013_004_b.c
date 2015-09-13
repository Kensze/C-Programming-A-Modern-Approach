#include <stdio.h>
#include <ctype.h>

int read_line(char str[], int n);

int main(void)
{
    char p[10];
    printf("Enter a message of up to 10 chars: ");
    read_line(p, 10);
    puts(p);

}

int read_line(char str[], int n)
{
    int ch, i = 0;

    while ((ch = getchar()) != '\n') {
        if (isspace(ch))
            break;
        if (i < n)
            str[i++] = ch;
    }
    str[i] = '\0';
    return i;       /* return str len */
}
