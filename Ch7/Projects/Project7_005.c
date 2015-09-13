/*
 * Name: Project7_005.c
 * Purpose: Computes a words points in scrabble
 * Author: K Sze
 */

#include <stdio.h>
#include <ctype.h>

int main(void)
{
    char ch;
    int sum = 0;

    printf("Enter a word: ");

    while ((ch = toupper(getchar())) != '\n') {
        switch (ch) {
            case 'A': case 'E': case 'I': case 'L': case 'N': case 'O': case 'R':
            case 'S': case 'T': case 'U':
                sum += 1;
                break;
            case 'D': case 'G':
                sum += 2;
                break;
            case 'B': case 'C': case 'M': case 'P':
                sum += 3;
                break;
            case 'F': case 'H': case 'V': case 'W': case 'Y':
                sum += 4;
                break;
            case 'K':
                sum += 5;
                break;
            case 'J': case 'X':
                sum += 8;
            case 'Q': case 'Z':
                sum += 10;
                break;
            default:
                printf("Not recognized input\n");
        }
    }
    printf("Scrabble value: %d\n", sum);



    return 0;
}


