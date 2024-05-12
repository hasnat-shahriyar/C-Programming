#include <stdio.h>

int main()
{
    int row, column;
    scanf("%d %d", &row, &column);

    int ar[row][column];

    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < column; j++)
        {
            scanf("%d", &ar[i][j]);
        }
    }

    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < column; j++)
        {
            printf("%d ", ar[i][j]);
        }
        printf("\n");
    }
    return 0;
}
