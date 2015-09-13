/*
 * Name: Project7_010.c
 * Purpose: Count the number of vowels in a sentence
 * Author: K Sze
 */

#include <stdio.h>
#include <ctype.h>

int main(void)
{
    char ch;
    int vowels = 0;

    printf("Enter a sentece: ");

    while ((ch = toupper(getchar())) != '\n') {
        switch (ch) {
            case 'A': case 'E': case 'I': case 'O': case 'U':
                vowels++;
                break;
            default:
                continue;
        }
    }
    printf("Your sentence contains %d vowels.\n", vowels);
    return 0;
}
