#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);

    int arr[n];

    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    int min = 0;
    int max = 0;
    
    for (int i = 0; i < n; i++) {
        if (arr[min] > arr[i]) {
            min = i;
        }
        if (arr[max] < arr[i])
        {
            max = i;
        }
    }
    int temp = arr[min];
    arr[min] = arr[max];
    arr[max] = temp;
    
    for (int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
    
    return 0;
}