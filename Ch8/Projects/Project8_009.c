
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void)
{
    char board[10][10];
    char chars[26] = {'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'j', 'k', 'l', 'm', 'n', 'o', 'p', 'q', 'r', 's', 't'};
    //    int character, direction;
    int direction;

    for (int i = 0; i < 10; i++) {
        for (int j = 0; j < 10; j++)
            board[i][j] = '.';
    }
    for (int i = 0; i < 10; i++) {
        for (int j = 0; j < 10; j++) {
            printf("%c ", board[i][j]);
        }
        printf("\n");
    }

    printf("\n");


    srand((unsigned) time(NULL));

    int row = 0;
    int col = 0;

    char trail = 'a';
    for (int i = 0; i < 26; i++) {
        //        character = chars[i];
        direction = rand() % 4;
        int i = -1;
        while (++i < 4)
        {
            switch (direction) {
                /*
                   case 0: x-=1; break;
                   case 1: y+=1; break;
                   case 2: x+=1; break;
                   case 3: y-=1; break;
                   */

                case 0:
                    if( row-1 >= 0 && board[row-1][col] == '.' ) {
                        --row;
                        i = -1;
                    }
                    break;
                case 1:
                    if( col+1 < 10 && board[row][col+1] == '.' ) {
                        ++col;
                        i = -1;
                    }
                    break;
                case 2:
                    if( row+1 < 10 && board[row+1][col] == '.' ) {
                        ++row;
                        i = -1;
                    }
                    break;
                case 3:
                    if( col-1 >= 0 && board[row][col-1] == '.' ) {
                        --col;
                        i = -1;
                    }
                    break;
            }

            if( i != -1 ) {
                direction = (direction+1)%4;
            }
            else {
                break;
            }
        }
        board[row][col] = trail;
        trail++;
    }

    for (int i = 0; i < 10; i++) {
        for (int j = 0; j < 10; j++) {
            printf("%c ", board[i][j]);
        }
        printf("\n");
    }

    printf("\n");

    return 0;
}
