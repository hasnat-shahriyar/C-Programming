#include <stdio.h>

int main()
{
    int row, col;
    scanf("%d %d", &row, &col);
    
    int matrix[row][col];
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            scanf("%d", &matrix[i][j]);
        }
    }
    
    for (int j = 0; j < col; j++)
    {
        printf("%d ", matrix[row - 1][j]);
    }
    printf("\n");
    
    for (int i = 0; i < row - 1; i++)
    {
        printf("%d ", matrix[i][col - 1]);
    }
    printf("%d\n", matrix[row - 1][col - 1]);
    
    return 0;
}
