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

    // Initialize a variable max with the first element of the array
    int max = arr[0];

    // Loop through the array elements to find the maximum value
    for (int i = 0; i < n; i++) {
        // If the current element is greater than max, update max
        if (max < arr[i]) {
            max = arr[i];
        }
    }
    printf("The maximum value in the array is: %d", max);

    return 0;
}

/*
    Step 1: Ask the user to input the size of the array
    Step 2: Read the size of the array entered by the user
    Step 3: Declare an array named arr with size n, based on user input
    Step 4: Ask the user to input initial values for the array elements
    Step 5: Loop to read input values from the user for each element of the array
    Step 6: Initialize a variable max with the first element of the array
    Step 7: Loop through the array elements to find the maximum value
    Step 8: If the current element is greater than max, update max
    Step 9: Print the maximum value found in the array
    Step 10: Indicate successful execution of the program
*/


/* Example : 5 | 10 20 50 30 40

1. User inputs the size of the array (`n = 5`).
2. User inputs initial values for the array elements (`10 20 50 30 40`).
3. The array `arr` is initialized with these values: `arr = {10, 20, 50, 30, 40}`.
4. `int max = arr[0];` sets `max` to the first element of the array: `max = 10`.

Now, let's go through the loop:

- Iteration 1: `i = 0`
  - Current element: `arr[0] = 10`.
  - Since `10` is greater than the current `max` (`10`), `max` remains `10`.
  
- Iteration 2: `i = 1`
  - Current element: `arr[1] = 20`.
  - Since `20` is greater than the current `max` (`10`), `max` is updated to `20`.
  
- Iteration 3: `i = 2`
  - Current element: `arr[2] = 50`.
  - Since `50` is greater than the current `max` (`20`), `max` is updated to `50`.
  
- Iteration 4: `i = 3`
  - Current element: `arr[3] = 30`.
  - Since `30` is greater than the current `max` (`50`), `max` remains `50`.
  
- Iteration 5: `i = 4`
  - Current element: `arr[4] = 40`.
  - Since `40` is greater than the current `max` (`50`), `max` remains `50`.

After the loop finishes, `max` holds the maximum value found in the array, which is `50`.

So, when you print `max`, it will output: `The maximum value in the array is: 50`.
*/