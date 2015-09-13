
#include <stdio.h>
#include <ctype.h>      /* ToUpper */

int main(void)
{
   int len;
   char ch;
   char message[1024];


    len = 0;
    printf("Enter message: ");
    while ((ch = getchar()) != '\n') {
        message[len] = toupper(ch);
        len++;
    }

    printf("In B1FF speak: ");
    for (int i = 0; i < len; i++) {
        if (message[i] == 'A')
            printf("4");
        else if (message[i] == 'B')
            printf("8");
        else if (message[i] == 'E')
            printf("3");
        else if (message[i] == 'I')
            printf("1");
        else if (message[i] == 'O')
            printf("0");
        else if (message[i] == 'S')
            printf("5");
        else
            printf("%c", message[i]);
    }
    printf("!!!!!!!!!!");
    printf("\n");


    return 0;
}
