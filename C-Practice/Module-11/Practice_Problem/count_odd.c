#include <stdio.h>

int count_odd(int *array, int size)
{
    int count = 0;
    for (int i = 0; i < size; i++)
    {
        if (array[i] % 2 != 0)
        {
            count++;
        }
    }
    return count;
}

int main()
{
    int n;
    scanf("%d", &n);

    int ar[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &ar[i]);
    }

    int odd_count = count_odd(ar, n);
    printf("%d", odd_count);
    return 0;
}
