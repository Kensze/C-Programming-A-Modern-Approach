
#include <stdio.h>

int main(void)
{
    int row, cols;

    int rows[5][5] = {{0}};

    for (int i = 0; i < 5; i++) {
        printf("Enter row %d: ", i+1);
        for (int j = 0; j < 5; j++)
            scanf("%d", &rows[i][j]);
    }

    printf("\n");
    printf("Row totals: ");
    for (int i = 0; i < 5; i++) {
        row = 0;
        for (int j = 0; j < 5; j++)
            row += rows[i][j];
        printf("%d ", row);
    }
    printf("\n");

    printf("Column totals: ");
    for (int i = 0; i < 5; i++) {
        cols = 0;
        for (int j = 0; j < 5; j++)
            cols += rows[j][i];
        printf("%d ", cols);
    }
    printf("\n");

}
