# Max and Min

```c

#include <stdio.h>

// Function to find the minimum and maximum elements in an array
void min_max(int *ar, int s, int *min, int *max)
{
    // Initialize min and max to the first element of the array
    *min = ar[0];
    *max = ar[0];

    // Iterate through the array to find the minimum and maximum elements
    for (int i = 1; i < s; i++)
    {
        // If the current element is less than the current minimum, update the minimum
        if (ar[i] < *min)
        {
            *min = ar[i];
        }

        // If the current element is greater than the current maximum, update the maximum
        if (ar[i] > *max)
        {
            *max = ar[i];
        }
    }
}

int main()
{
    int n;
    // Input the size of the array
    scanf("%d", &n);

    int ar[n];
    // Input the elements of the array
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &ar[i]);
    }

    int min, max;

    // Call the function to find the minimum and maximum elements
    min_max(ar, n, &min, &max);

    // Output the minimum and maximum elements
    printf("%d %d", min, max);
    return 0;
}

```

This C code defines a function `min_max` that finds the minimum and maximum elements in an array. Let's break down the code and explain how the `min` and `max` variables are used.

1. **Function Definition (`min_max`)**:

   - Parameters:
     - `ar` (int pointer): Pointer to the array of integers.
     - `s` (int): Size of the array.
     - `min` (int pointer): Pointer to store the minimum value found in the array.
     - `max` (int pointer): Pointer to store the maximum value found in the array.

2. **Initialization**:

   - Inside the `min_max` function, `min` and `max` are initialized with the first element of the array.
     ```c
     *min = ar[0];
     *max = ar[0];
     ```
   - `*min` and `*max` are used to dereference the pointers and update the values they point to.

3. **Finding Min and Max**:

   - A loop iterates through the array starting from the second element (`i = 1`) to find the minimum and maximum elements.
     ```c
     for (int i = 1; i < s; i++)
     ```
   - Inside the loop, it checks if the current element (`ar[i]`) is less than the current minimum (`*min`). If true, it updates the minimum.
     ```c
     if (ar[i] < *min)
     {
         *min = ar[i];
     }
     ```
   - Similarly, it checks if the current element is greater than the current maximum. If true, it updates the maximum.
     ```c
     if (ar[i] > *max)
     {
         *max = ar[i];
     }
     ```

4. **Main Function** (`main`):
   - In the `main` function, it takes input for the size of the array (`n`) and the elements of the array (`ar`).
   - It then declares variables `min` and `max` to store the minimum and maximum values.
   - Calls the `min_max` function with the array and its size to find the minimum and maximum values.
   - Finally, it prints the minimum and maximum values.

Overall, this code demonstrates a simple way to find the minimum and maximum elements in an array using pointers to update the values.
