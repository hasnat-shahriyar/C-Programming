#include <stdio.h>

int main()
{
    int row, column;
    printf("Enter the number of rows and columns: ");
    scanf("%d %d", &row, &column);

    int ar[row][column];
    printf("Enter the elements of the array:\n");
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < column; j++)
        {
            scanf("%d", &ar[i][j]);
        }
    }

    int e;
    printf("Enter the row index to print: ");
    scanf("%d", &e);
    
    printf("Elements of row %d: ", e);
    for (int i = 0; i < column; i++)
    {
        printf("%d ", ar[e][i]);
    }

    int f;
    printf("\nEnter the column index to print: ");
    scanf("%d", &f);

    printf("Elements of column %d: \n", f);
    for (int i = 0; i < row; i++)
    {
        printf("%d \n", ar[i][f]);
    }
    return 0;
}
