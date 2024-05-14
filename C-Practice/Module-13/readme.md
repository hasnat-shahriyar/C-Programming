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

## Diagonal Matrix

A diagonal matrix is a square matrix where all elements outside the main diagonal are zero. The main diagonal runs from the top-left to the bottom-right of the matrix. For a matrix to be considered diagonal, it must be square, meaning it has the same number of rows and columns.

Let's go through the provided code and understand how it checks if a matrix is diagonal using an example input.

### Example Input

```
3
3
2 0 0
0 5 0
0 0 3
```

### Code Explanation

1. **Input Reading**: The code starts by reading the number of rows and columns, followed by the elements of the matrix.
2. **Square Matrix Check**: The code first checks if the matrix is square by comparing the number of rows and columns.
3. **Diagonal Check**: The code then checks if all elements outside the main diagonal are zero.

### Visualization with the Example Input

#### Step-by-Step Code Execution

1. **Reading the Dimensions**:

   - `row = 3`
   - `col = 3`

2. **Reading the Elements**:

   - The matrix `arr` is read as:
     ```
     2 0 0
     0 5 0
     0 0 3
     ```

3. **Checking if the Matrix is Square**:

   - Since `row` equals `col`, it is a square matrix.

4. **Checking for Diagonal Matrix**:
   - The code iterates through each element of the matrix.
   - For each element, it checks if it is on the main diagonal (`i == j`). If not, it checks if the element is zero.

#### Detailed Visualization

- **First Iteration (i=0)**:

  - `j=0`: Element `arr[0][0]` is on the diagonal (value = 2).
  - `j=1`: Element `arr[0][1]` is off-diagonal (value = 0, valid).
  - `j=2`: Element `arr[0][2]` is off-diagonal (value = 0, valid).

- **Second Iteration (i=1)**:

  - `j=0`: Element `arr[1][0]` is off-diagonal (value = 0, valid).
  - `j=1`: Element `arr[1][1]` is on the diagonal (value = 5).
  - `j=2`: Element `arr[1][2]` is off-diagonal (value = 0, valid).

- **Third Iteration (i=2)**:
  - `j=0`: Element `arr[2][0]` is off-diagonal (value = 0, valid).
  - `j=1`: Element `arr[2][1]` is off-diagonal (value = 0, valid).
  - `j=2`: Element `arr[2][2]` is on the diagonal (value = 3).

Since all off-diagonal elements are zero and the matrix is square, the flag remains `1`.

### Output

The code will output:

```
Primary Diagonal
```

### Code with Comments

Here's the code with added comments for clarity:

```c
#include <stdio.h>

int main()
{
    int row, col;
    printf("Enter the number of rows and columns: ");
    scanf("%d %d", &row, &col);

    int arr[row][col];
    int element = row * col;
    printf("Enter the elements of the array:\n");
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            scanf("%d", &arr[i][j]);
        }
    }

    int flag = 1;
    if (row != col)
    {
        flag = 0;  // Not a square matrix
    }
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            if (i == j)
            {
                continue;  // Skip diagonal elements
            }
            if (arr[i][j] != 0)
            {
                flag = 0;  // Off-diagonal element is non-zero
            }
        }
    }
    if (flag == 1)
    {
        printf("Primary Diagonal\n");
    }
    else
    {
        printf("Not Diagonal\n");
    }
}
```

### Summary

The code checks if the given matrix is a diagonal matrix by ensuring all off-diagonal elements are zero and the matrix is square. In this example, the matrix `2 0 0`, `0 5 0`, `0 0 3` is a diagonal matrix, so the output is `Primary Diagonal`.
