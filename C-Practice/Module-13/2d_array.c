#include <stdio.h>

int main()
{
    int matrix[3][4] = {
        {10, 20, 30, 40},
        {0, 2, 6, 5},
        {50, 60, 70, 80}
    };

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }
    return 0;
}
