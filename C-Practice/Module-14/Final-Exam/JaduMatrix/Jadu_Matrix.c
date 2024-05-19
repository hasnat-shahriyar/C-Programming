#include <stdio.h>

int main() {
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

    int isJadu = 1;
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            if ((i == j || i + j == row - 1) && matrix[i][j] != 1)
            {
                isJadu = 0;
                break;
            }
            else if ((i != j && i + j != row - 1) && matrix[i][j] != 0)
            {
                isJadu = 0;
                break;
            }
        }
        if (!isJadu) break;
    }

    if (isJadu) 
    {
        printf("YES\n");
    } 
    else
    {
        printf("NO\n");
    }

    return 0;
}
