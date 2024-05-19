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

    int squareMatrix = 1;
    for (int i = 0; i < row && squareMatrix; i++)
    {
        for (int j = 0; j < col; j++)
        {
            if ((i == j || i + j == row - 1) && matrix[i][j] != 1)
            {
                squareMatrix = 0;
                break;
            }
            else if ((i != j && i + j != row - 1) && matrix[i][j] != 0)
            {
                squareMatrix = 0;
                break;
            }
        }
    }

    if (squareMatrix)
    {
        printf("YES\n");
    }
    else
    {
        printf("NO\n");
    }

    return 0;
}
