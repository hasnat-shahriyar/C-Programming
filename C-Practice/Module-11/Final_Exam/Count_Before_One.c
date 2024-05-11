#include <stdio.h>

int count_before_one(int *ar, int n) 
{
    int count = 0;
    for (int i = 0; i < n; i++) 
    {
        if (ar[i] == 1) {
            break;
        }
        count++;
    }
    return count;
}

int main() 
{
    int n;
    scanf("%d", &n);

    int arr[n];
    for (int i = 0; i < n; i++) 
    {
        scanf("%d", &arr[i]);
    }

    int final = count_before_one(arr, n);
    printf("%d\n", final);

    return 0;
}
