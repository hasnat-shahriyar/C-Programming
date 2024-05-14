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

##

## Diagonal Matrix

### Understanding Diagonal Matrices

A diagonal matrix is a square matrix (same number of rows and columns) where the elements outside the main diagonal are all zero. The main diagonal consists of elements where the row index equals the column index (i.e., positions like (0,0), (1,1), (2,2), etc.).

For example, in a 3x3 diagonal matrix, only the elements in the positions (0,0), (1,1), and (2,2) can be non-zero:

```
a 0 0
0 b 0
0 0 c
```

### Code Explanation

Let's break down the given C code to understand how it checks if a given matrix is a diagonal matrix.

```c
#include <stdio.h>

int main()
{
    // Variable declarations for the number of rows and columns
    int row, col;

    // Prompt the user to enter the number of rows and columns
    printf("Enter the number of rows and columns: ");
    // Read the number of rows and columns from the user input
    scanf("%d %d", &row, &col);

    // Declare a 2D array with the given number of rows and columns
    int arr[row][col];

    // Calculate the total number of elements in the array (not used further in the code)
    int element = row * col;

    // Prompt the user to enter the elements of the array
    printf("Enter the elements of the array:\n");
    // Read the elements into the 2D array
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            scanf("%d", &arr[i][j]);
        }
    }

    // Flag variable to determine if the matrix is a diagonal matrix
    int flag = 1;

    // Check if the matrix is not square (number of rows is not equal to number of columns)
    if (row != col)
    {
        // If the matrix is not square, set the flag to 0 (indicating it's not a diagonal matrix)
        flag = 0;
    }

    // Iterate over each element of the matrix to check the diagonal condition
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            // Skip the diagonal elements
            if (i == j)
            {
                continue;
            }
            // If any non-diagonal element is not zero, set the flag to 0
            if (arr[i][j] != 0)
            {
                flag = 0;
            }
        }
    }

    // After checking all elements, if the flag is still 1, it means the matrix is diagonal
    if (flag == 1)
    {
        printf("Primary Diagonal\n");
    }
    // If the flag is 0, the matrix is not a diagonal matrix
    else
    {
        printf("Not Diagonal\n");
    }

    // Return 0 to indicate successful execution
    return 0;
}
```

### Visualizing and Explaining the Code

1. **Input Matrix Dimensions and Elements:**

   - The program starts by asking the user to input the number of rows and columns for the matrix.
   - It then initializes a 2D array `arr` of the specified size.
   - The user is prompted to input the elements of the matrix.

2. **Initial Check for Square Matrix:**

   - The code first checks if the matrix is square (`row == col`). If not, it sets `flag` to 0 immediately because a non-square matrix cannot be diagonal.

3. **Check for Diagonal Matrix:**

   - The nested loops iterate through each element of the matrix.
   - If the element is on the main diagonal (`i == j`), the loop continues without further checks.
   - If the element is not on the main diagonal and is not zero (`arr[i][j] != 0`), it sets `flag` to 0.

4. **Result Output:**
   - After the loops, if `flag` is still 1, the matrix is diagonal, and it prints "Primary Diagonal".
   - Otherwise, it prints "Not Diagonal".

### Example Input and Execution

Given the input matrix:

```
2 0 0
0 5 0
0 0 3
```

**Step-by-Step Execution:**

1. **Matrix Input:**

   - The user inputs `3` for rows and `3` for columns.
   - The user then inputs the elements of the matrix:
     ```
     2 0 0
     0 5 0
     0 0 3
     ```

2. **Square Matrix Check:**

   - The code verifies `row == col` (3 == 3), so the matrix is square.

3. **Diagonal Matrix Check:**

   - Iterating through each element:
     - `(0,0) -> 2` (main diagonal, no check)
     - `(0,1) -> 0` (not on the diagonal, value is zero)
     - `(0,2) -> 0` (not on the diagonal, value is zero)
     - `(1,0) -> 0` (not on the diagonal, value is zero)
     - `(1,1) -> 5` (main diagonal, no check)
     - `(1,2) -> 0` (not on the diagonal, value is zero)
     - `(2,0) -> 0` (not on the diagonal, value is zero)
     - `(2,1) -> 0` (not on the diagonal, value is zero)
     - `(2,2) -> 3` (main diagonal, no check)
   - All non-diagonal elements are zero, so `flag` remains 1.

4. **Output Result:**
   - Since `flag` is 1, it prints "Primary Diagonal".

### Conclusion

This code effectively checks if a matrix is a diagonal matrix by:

- Ensuring the matrix is square.
- Verifying all non-diagonal elements are zero.
  If both conditions are met, it confirms the matrix as diagonal.

## Secondary Diagonal Matrices

A secondary diagonal matrix is a square matrix where the elements outside the secondary diagonal are all zero. The secondary diagonal consists of elements where the sum of the row index and column index equals the size of the matrix minus one (i.e., positions like (0, n-1), (1, n-2), (2, n-3), etc., for an n x n matrix).

For example, in a 3x3 secondary diagonal matrix, only the elements in the positions (0,2), (1,1), and (2,0) can be non-zero:

```
0 0 a
0 b 0
c 0 0
```

### Code Explanation

Let's break down the given C code to understand how it checks if a given matrix is a secondary diagonal matrix.

```c
#include <stdio.h>

int main()
{
    // Variable declarations for the number of rows and columns
    int row, col;

    // Prompt the user to enter the number of rows and columns
    printf("Enter the number of rows and columns: ");
    // Read the number of rows and columns from the user input
    scanf("%d %d", &row, &col);

    // Declare a 2D array with the given number of rows and columns
    int arr[row][col];

    // Prompt the user to enter the elements of the array
    printf("Enter the elements of the array:\n");
    // Read the elements into the 2D array
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            scanf("%d", &arr[i][j]);
        }
    }

    // Flag variable to determine if the matrix is a secondary diagonal matrix
    int flag = 1;

    // Check if the matrix is not square (number of rows is not equal to number of columns)
    if (row != col)
    {
        // If the matrix is not square, set the flag to 0 (indicating it's not a diagonal matrix)
        flag = 0;
    }

    // Iterate over each element of the matrix to check the secondary diagonal condition
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            // Skip the secondary diagonal elements (where i + j == row - 1)
            if (i + j == row - 1)
            {
                continue;
            }
            // If any non-diagonal element is not zero, set the flag to 0
            if (arr[i][j] != 0)
            {
                flag = 0;
            }
        }
    }

    // After checking all elements, if the flag is still 1, it means the matrix is secondary diagonal
    if (flag == 1)
    {
        printf("Secondary Diagonal\n");
    }
    // If the flag is 0, the matrix is not a secondary diagonal matrix
    else
    {
        printf("Not Diagonal\n");
    }

    // Return 0 to indicate successful execution
    return 0;
}
```

### Visualizing and Explaining the Code

1. **Input Matrix Dimensions and Elements:**

   - The program starts by asking the user to input the number of rows and columns for the matrix.
   - It then initializes a 2D array `arr` of the specified size.
   - The user is prompted to input the elements of the matrix.

2. **Initial Check for Square Matrix:**

   - The code first checks if the matrix is square (`row == col`). If not, it sets `flag` to 0 immediately because a non-square matrix cannot be a secondary diagonal matrix.

3. **Check for Secondary Diagonal Matrix:**

   - The nested loops iterate through each element of the matrix.
   - If the element is on the secondary diagonal (`i + j == row - 1`), the loop continues without further checks.
   - If the element is not on the secondary diagonal and is not zero (`arr[i][j] != 0`), it sets `flag` to 0.

4. **Result Output:**
   - After the loops, if `flag` is still 1, the matrix is a secondary diagonal matrix, and it prints "Secondary Diagonal".
   - Otherwise, it prints "Not Diagonal".

### Example Input and Execution

Given the input matrix:

```
0 0 2
0 5 0
3 0 0
```

**Step-by-Step Execution:**

1. **Matrix Input:**

   - The user inputs `3` for rows and `3` for columns.
   - The user then inputs the elements of the matrix:
     ```
     0 0 2
     0 5 0
     3 0 0
     ```

2. **Square Matrix Check:**

   - The code verifies `row == col` (3 == 3), so the matrix is square.

3. **Secondary Diagonal Matrix Check:**

   - Iterating through each element:
     - `(0,0) -> 0` (not on the diagonal, value is zero)
     - `(0,1) -> 0` (not on the diagonal, value is zero)
     - `(0,2) -> 2` (secondary diagonal, no check)
     - `(1,0) -> 0` (not on the diagonal, value is zero)
     - `(1,1) -> 5` (secondary diagonal, no check)
     - `(1,2) -> 0` (not on the diagonal, value is zero)
     - `(2,0) -> 3` (secondary diagonal, no check)
     - `(2,1) -> 0` (not on the diagonal, value is zero)
     - `(2,2) -> 0` (not on the diagonal, value is zero)
   - All non-secondary diagonal elements are zero, so `flag` remains 1.

4. **Output Result:**
   - Since `flag` is 1, it prints "Secondary Diagonal".

### Conclusion

This code effectively checks if a matrix is a secondary diagonal matrix by:

- Ensuring the matrix is square.
- Verifying all non-secondary diagonal elements are zero.
  If both conditions are met, it confirms the matrix as a secondary diagonal matrix.
