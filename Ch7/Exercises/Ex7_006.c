#include <stdio.h>

int main(void)
{
    printf("A: Days in a month, char is sufficent since it can store up to 127\n");
    printf("B: Days in a year, short int is required as it can store 32,767\n");
    printf("C: Minutes in a day = 1440, short int aswell\n");
    printf("D: Seconds in a day = 86400, int is min. int can store up to 2,147,483,647\n");

    return 0;
}
