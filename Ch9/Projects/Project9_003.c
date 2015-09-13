
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void generate_random_walk(char walk[10][10]);
void print_array(char walk[10][10]);

int main(void)
{
    char walk[10][10];

    generate_random_walk(walk);
    print_array(walk);


    return 0;
}

void generate_random_walk(char walk[10][10])
{
    int direction = 0;
    srand((unsigned) time(NULL));

    int row = 0;
    int col = 0;


    for (int i = 0; i < 10; i++) {
        for (int j = 0; j < 10; j++)
            walk[i][j] = '.';
    }
    char trail = 'A';
    for (int i = 0; i < 26; i++) {
        direction = rand() % 4;
        int i = -1;
        while (++i < 4)
        {
            switch (direction) {
                case 0:
                    if( row-1 >= 0 && walk[row-1][col] == '.' ) {
                        --row;
                        i = -1;
                    }
                    break;
                case 1:
                    if( col+1 < 10 && walk[row][col+1] == '.' ) {
                        ++col;
                        i = -1;
                    }
                    break;
                case 2:
                    if( row+1 < 10 && walk[row+1][col] == '.' ) {
                        ++row;
                        i = -1;
                    }
                    break;
                case 3:
                    if( col-1 >= 0 && walk[row][col-1] == '.' ) {
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
        walk[row][col] = trail;
        trail++;
    }
}

void print_array(char walk[10][10])
{
    for (int i = 0; i < 10; i++) {
        for (int j = 0; j < 10; j++) {
            printf("%c ", walk[i][j]);
        }
        printf("\n");
    }
    printf("\n");
}
