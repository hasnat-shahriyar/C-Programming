# 2D Array

In C programming, a 2D array is an array of arrays. It's a data structure that represents a table-like structure, where data is stored in rows and columns.

Here's a basic explanation:

1. **Declaration**: To declare a 2D array in C, you specify the data type of the elements it will contain, and the number of rows and columns it will have. For example:

```c
int matrix[3][4]; // Declares a 2D array with 3 rows and 4 columns
```

2. **Initialization**: You can initialize a 2D array at the time of declaration:

```c
int matrix[3][4] = {
    {1, 2, 3, 4},   // First row
    {5, 6, 7, 8},   // Second row
    {9, 10, 11, 12} // Third row
};
```

3. **Accessing Elements**: Elements in a 2D array are accessed using two indices: one for the row and one for the column. The indices are zero-based, meaning the first row and column have index 0. For example, to access the element in the second row and third column:

```c
int element = matrix[1][2]; // Accesses the element in the second row and third column (6 in the above example)
```

4. **Iterating Through a 2D Array**: You can use nested loops to iterate through all elements of a 2D array:

```c
for (int i = 0; i < 3; i++) {       // Loop through rows
    for (int j = 0; j < 4; j++) {   // Loop through columns
        printf("%d ", matrix[i][j]); // Print each element
    }
    printf("\n"); // Move to the next row
}
```

5. **Memory Representation**: In memory, a 2D array is stored in a contiguous block of memory. The rows are stored sequentially, meaning the elements of one row come right after the elements of the previous row.

```plaintext
| 1 | 2 | 3 | 4 | 5 | 6 | 7 | 8 | 9 | 10 | 11 | 12 |
```

However, it's important to note that while a 2D array is essentially a syntactic sugar over a 1D array, it provides a convenient way to work with tabular data in code.

##

```c
#include <stdio.h>

int main()
{
    int ar[3][2]; // Declares a 2D array of integers with 3 rows and 2 columns

    // Loop to input values into the array
    for (int i = 0; i < 3; i++) // Outer loop for rows
    {
        for (int j = 0; j < 2; j++) // Inner loop for columns
        {
            scanf("%d", &ar[i][j]); // Input integer values into the array elements
        }
    }

    // Loop to print the array elements
    for (int i = 0; i < 3; i++) // Outer loop for rows
    {
        for (int j = 0; j < 2; j++) // Inner loop for columns
        {
            printf("%d ", ar[i][j]); // Print the array elements separated by space
        }
        printf("\n"); // Move to the next line after printing each row
    }
    return 0;
}
```

Suppose, we take input `(10 20, 30 40, 50 60)` so now let's visualize its iterations.

1. **Declaration and Input**:
   - The program declares a 2D array `ar` of size `3x2`.
   - It then iterates over each element of the array using nested loops, prompting the user to input integers for each element.

```plaintext
Input:
10 20
30 40
50 60
```

2. **Memory Representation**:

   - After input, the array `ar` will hold the following values:
     ```
     ar = [
            [10, 20],
            [30, 40],
            [50, 60]
          ]
     ```

3. **Output**:
   - After input, the program iterates through the array again and prints each element.

```plaintext
Output:
10 20
30 40
50 60
```

Here's a step-by-step visualization of how the input and output occur:

```plaintext
Input:
Enter element at ar[0][0]: 10
Enter element at ar[0][1]: 20
Enter element at ar[1][0]: 30
Enter element at ar[1][1]: 40
Enter element at ar[2][0]: 50
Enter element at ar[2][1]: 60

Output:
10 20
30 40
50 60
```

Each iteration of the loops corresponds to the input/output for a single element of the array, following the row-major order.
