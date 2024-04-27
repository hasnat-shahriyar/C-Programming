#include <stdio.h>

int main() {
    int n;
    printf("Enter the size of the array: ");
    scanf("%d", &n);

    int arr[n];

    printf("Enter initial values for the array: ");
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    int min = arr[0];

    for (int i = 0; i < n; i++) {
        if (min > arr[i]) {
            min = arr[i];
        }
    }
    printf("The minimum value in the array is: %d", min);

    return 0;
}