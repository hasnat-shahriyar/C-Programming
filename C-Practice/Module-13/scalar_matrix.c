#include <stdio.h>

int main()
{
    int row, col;
    printf("Enter the number of rows and columns: ");
    scanf("%d %d", &row, &col);

    int arr[row][col];
    int element = row*col;
    printf("Enter the elements of the array:\n");
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            scanf("%d", &arr[i][j]);
        }
    }

    int flag = 1;
    if(row != col)
    {
        flag = 0;
    }
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            if(i == j)
            {
                if(arr[i][j] != arr[0][0])
                {
                    flag = 0;
                }
            }
            else if(arr[i][j] != 0)
            {
                flag = 0;
            }
        }
    }
    if(flag == 1)
    {
        printf("Scalar Matrix\n");
    }
    else{
        printf("Not Scalar Matrix\n");
    }
}