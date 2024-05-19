```c
#include <stdio.h>

int main() {
    // Declare variables for the dimensions of the matrix
    int n, m;
    // Read the dimensions of the matrix
    scanf("%d %d", &n, &m);

    // Declare a 2D array to store the matrix
    int matrix[n][m];

    // Input the elements of the matrix
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }

    // Variable to track if the matrix is a Jadu Square
    int isJadu = 1;

    // Check each element of the matrix
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            // If it's on the main diagonal or anti-diagonal
            if ((i == j || i + j == n - 1) && matrix[i][j] != 1) {
                // If it's not 1, the matrix is not a Jadu Square
                isJadu = 0;
                break;
            }
            // If it's not on the main diagonal or anti-diagonal
            else if ((i != j && i + j != n - 1) && matrix[i][j] != 0) {
                // If it's not 0, the matrix is not a Jadu Square
                isJadu = 0;
                break;
            }
        }
        // If isJadu becomes false, break out of the outer loop
        if (!isJadu) break;
    }

    // Output whether the matrix is a Jadu Square or not
    if (isJadu) {
        printf("YES\n");
    } else {
        printf("NO\n");
    }

    return 0;
}
```

Let's break down the code and explain the logic step by step.

### Code Explanation:

1. **Input:**

   - The code first reads two integers `n` and `m` representing the number of rows and columns in the matrix, respectively.
   - Then, it initializes a 2D array `matrix` of size `n x m` to store the elements of the matrix.

2. **Matrix Input:**

   - Nested loops are used to read the elements of the matrix. The outer loop iterates over the rows, and the inner loop iterates over the columns.

3. **Checking for Jadu Matrix:**

   - Another nested loop structure is used to traverse through each element of the matrix and check if it satisfies the conditions of a Jadu Matrix.
   - The conditions are:
     - If an element lies on the primary diagonal (`i == j`) or the secondary diagonal (`i + j == n - 1`), it must be `1`.
     - If an element does not lie on any of the diagonals, it must be `0`.

4. **Output:**
   - If all elements satisfy the conditions, the variable `isJadu` remains `1`, indicating that the matrix is a Jadu Matrix. In this case, "YES" is printed.
   - If any element violates the conditions, `isJadu` is set to `0`, indicating that the matrix is not a Jadu Matrix. In this case, "NO" is printed.

### Visual Representation:

Let's illustrate with a sample Jadu Matrix:

```
1 0 0 0 1
0 1 0 1 0
0 0 1 0 0
0 1 0 1 0
1 0 0 0 1
```

In this matrix:

- Primary Diagonal: Elements from (0,0) to (4,4) are on the primary diagonal.
- Secondary Diagonal: Elements from (0,4) to (4,0) are on the secondary diagonal.
- All other elements are `0`.

### Logic:

- The program iterates over each element of the matrix.
- For each element:
  - If it lies on either the primary or secondary diagonal, it must be `1`.
  - If it doesn't lie on any diagonal, it must be `0`.
- If any element violates these conditions, the matrix is not a Jadu Matrix.

### Sample Input and Output:

**Sample Input:**

```
5 5
1 0 0 0 1
0 1 0 1 0
0 0 1 0 0
0 1 0 1 0
1 0 0 0 1
```

**Sample Output:**

```
YES
```

This output indicates that the given matrix is indeed a Jadu Matrix because all the conditions are satisfied.

The same logic is applied to other sample inputs to determine whether they are Jadu Matrices or not.
V
