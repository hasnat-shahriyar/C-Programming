#include <stdio.h>

void print_array(int arr[], int n, int i)
{
    if (i == n) return;
    printf("%d\n", arr[i]);
    print_array(arr, n, ++i);
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
    print_array(ar, n, 0);
    return 0;
}
