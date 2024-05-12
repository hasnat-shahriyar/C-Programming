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
