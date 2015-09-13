#include <stdio.h>

#define LEN 1000

int main(void)
{
    char *p, c, message[LEN];
    int i;

    printf("Enter a message : ");
    p = &message[0];
    while ((c = getchar()) != '\n') {
        *p++ = c;
    }

    for (p -= 1; p >= message; p--)
        printf("%c", *p);
    printf("\n");
}

