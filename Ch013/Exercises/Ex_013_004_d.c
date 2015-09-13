#include <stdio.h>
#include <ctype.h>

int read_line(char str[], int n);

int main(void)
{
    char p[10];
    printf("Enter a message of up to 10 chars: ");
    int len = read_line(p, 10);
    printf("%s %d\n", p, len);

}

int read_line(char str[], int n)
{
    int ch, i = 0;

    while ((ch = getchar()) != '\n') {
        if (i < n)
            str[i++] = ch;
    }
    str[i] = '\0';
    return i;       /* return str len */
}
