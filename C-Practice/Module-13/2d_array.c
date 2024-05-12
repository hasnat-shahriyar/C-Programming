#include <stdio.h>

int main()
{
    int ar[5][4];
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            printf("ar[%d][%d] ", i, j);
        }
        printf("\n");
    }
    return 0;
}
