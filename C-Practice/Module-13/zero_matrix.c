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

    int count = 0;
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            if(arr[i][j] == 0)
            {
                count++;
            }
        }
    }
    printf("Number of zeros in the array: %d \n", count);

    if(element == count)
    {
        printf("Zero Matrix\n");
    }
    else{
        printf("Not a Zero Matrix\n");
    }
    return 0;
}
