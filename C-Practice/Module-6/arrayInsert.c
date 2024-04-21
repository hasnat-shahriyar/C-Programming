#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    int ar[n + 1]; // Declare an array of size n+1
    for (int i = 0; i < n; i++) {
        scanf("%d", &ar[i]); // Input elements into the array
    }
    int pos, value;
    scanf("%d %d", &pos, &value); // Input the position and value to insert
    for (int i = n; i >= pos + 1; i--) {
        ar[i] = ar[i - 1]; // Shift elements to the right to make space
    }
    ar[pos] = value; // Insert the new value at the specified position
    for (int i = 0; i <= n; i++) {
        printf("%d ", ar[i]); // Output the modified array
    }
    return 0;
}
