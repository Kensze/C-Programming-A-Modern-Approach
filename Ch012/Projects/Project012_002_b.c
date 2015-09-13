#include <stdio.h>
#include <stdbool.h>
//#include <ctype.h>

int tolower(int c);
bool is_palindrome(char message[], int *n);

int main(void)
{

    char c, message[1000];
    int i = 0;
    int *iptr = &i;

    printf("Enter a message: ");
    while ((c = getchar()) != '\n') {
        if (c == ' ' || c == '\t' || c == ',' || c == '.' || c == '?' || c == '!' || c == '-')
            continue;
        message[*iptr] = tolower(c);
        (*iptr)++;
    }

    //printf("%d\n", i);
    printf("%s\n", is_palindrome(message, iptr) ? "Palindrome" : "Not palindrome");
    return 0;
}

bool is_palindrome(char message[], int *n)
{
    char *p;

    for (p = message; p <= &message[*n]; p++) {
        (*n)--;
        if (*p != message[*n])
            return false;
    }
    return true;
}

int tolower(int c)
{
    char d;
    if (c >= 65 && c <= 90) {
        d = c + 32;
        return d;
    }
    return c;
}
