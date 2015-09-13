#include <stdio.h>

int main(int argc, char *argv[])
{
    int i;

    printf("Your argument list\n");
    for (i = 0; i < argc; i++)
        printf("%c\n", *argv[i]);

    printf("The result of %d + %d is %d\n", *argv[1] - '0', *argv[2] - '0',
                                           (*argv[1] - '0' + *argv[2] - '0'));


    return 0;
}
