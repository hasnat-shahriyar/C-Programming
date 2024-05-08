#include <stdio.h>

void min_max(int *ar, int s, int *min, int *max)
{
    *min = ar[0];
    *max = ar[0];
    for (int i = 1; i < s; i++)
    {
        if(ar[i] < *min)
        {
            *min = ar[i];
        }
        if(ar[i] > *max)
        {
            *max = ar[i];
        }
    }
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

    int min, max;

    min_max(ar, n, &min, &max);

    printf("%d %d", min, max);
    return 0;
}
