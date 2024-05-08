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

# Count Odd

This C code demonstrates a simple function named `count_odd()` and its usage in the `main()` function. Let's break down each part:

1. **count_odd() Function**:

   ```c
   int count_odd(int *array, int size)
   ```

   - This function takes two parameters: a pointer to an array of integers (`*array`) and the size of that array (`size`).

   ```c
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
   ```

   - Inside the function, an integer variable `count` is initialized to 0. This variable is used to count the number of odd elements in the array.
   - The function then iterates through the array using a `for` loop, checking each element.
   - If the element at the current index (`array[i]`) is odd (i.e., the remainder of division by 2 is not 0), the `count` is incremented.
   - Finally, the function returns the total count of odd elements.

2. **main() Function**:

   ```c
   int main()
   {
       int n;
       scanf("%d", &n);
   ```

   - In the `main()` function, an integer variable `n` is declared. This variable is used to store the size of the array.
   - `scanf("%d", &n);` is used to read the size of the array from the user input.

   ```c
       int ar[n];
       for (int i = 0; i < n; i++)
       {
           scanf("%d", &ar[i]);
       }
   ```

   - An array `ar` of size `n` is declared to store the integers provided by the user.
   - A `for` loop is used to iterate from 0 to `n-1`, reading each integer from the user input and storing it in the array `ar`.

   ```c
       int odd_count = count_odd(ar, n);
       printf("%d", odd_count);
       return 0;
   }
   ```

   - The `count_odd()` function is called with the array `ar` and its size `n`, and the returned count of odd elements is stored in the variable `odd_count`.
   - Finally, the count of odd elements is printed using `printf()`.

Overall, this code reads integers into an array, counts the number of odd integers in that array using a separate function, and prints the count.
