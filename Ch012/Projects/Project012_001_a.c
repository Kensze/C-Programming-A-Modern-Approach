#include <stdio.h>

#define LEN 1000

int main(void)
{
    char c, message[LEN];
    int i, n;

    printf("Enter a message : ");
    while ((c = getchar()) != '\n' && n < LEN) {
        message[n] = c;
        n++;
    }

    for (i = n - 1; i >= 0; i--)
        printf("%c", message[i]);
    printf("\n");

}

