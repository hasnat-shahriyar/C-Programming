```c
#include <stdio.h>

int main() {
    int row, col;
    // Input the number of rows and columns of the matrix
    scanf("%d %d", &row, &col);

    // Declare a matrix with given rows and columns
    int matrix[row][col];

    // Input elements of the matrix
    for (int i = 0; i < row; i++) {
        for (int j = 0; j < col; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }

    // Variable to track whether the matrix meets the conditions of a square matrix
    int squareMatrix = 1;

    // Loop through each element of the matrix
    for (int i = 0; i < row && squareMatrix; i++) {
        for (int j = 0; j < col; j++) {
            // Check if the current element is on the main diagonal or anti-diagonal
            if ((i == j || i + j == row - 1) && matrix[i][j] != 1) {
                // If the element is not 1 on the main diagonal or anti-diagonal, it's not a square matrix
                squareMatrix = 0;
                break;
            } else if ((i != j && i + j != row - 1) && matrix[i][j] != 0) {
                // If the element is not 0 elsewhere, it's not a square matrix
                squareMatrix = 0;
                break;
            }
        }
    }

    // Output whether the matrix is a square matrix or not
    if (squareMatrix) {
        printf("YES\n");
    } else {
        printf("NO\n");
    }

    return 0;
}

```

Let's break down the code and explain it step by step.

### Problem Statement:

The task is to determine whether a given matrix is a Jadu Matrix or not. A Jadu Matrix is a square matrix where the values of the primary diagonal and the secondary diagonal are all 1, and all other elements are 0.

### Code Explanation:

1. **Input Size of Matrix:**

   - The program starts by prompting the user to input the number of rows and columns of the matrix.
   - It reads the input values into the variables `row` and `col`.

2. **Matrix Declaration and Input:**

   - An array `matrix` is declared with the size `row` x `col` to store the elements of the matrix.
   - The elements of the matrix are then taken as input from the user in row-major order using nested loops.

3. **Check for Square Matrix and Jadu Matrix:**

   - A variable `squareMatrix` is initialized to `1`, assuming initially that the matrix is square.
   - Nested loops iterate through each element of the matrix.
   - For each element, it checks:
     - If the element is on the main diagonal or the anti-diagonal, and it's not equal to `1`, it sets `squareMatrix` to `0`, indicating it's not a Jadu Matrix.
     - If the element is not on the main diagonal or the anti-diagonal, and it's not equal to `0`, it sets `squareMatrix` to `0`, indicating it's not a Jadu Matrix.

4. **Output:**
   - Finally, it prints "YES" if `squareMatrix` is still `1`, indicating the matrix is a Jadu Matrix. Otherwise, it prints "NO".

### Visual Representation:

Consider the following 5x5 matrix from one of the sample inputs:

```
1 0 0 0 1
0 1 0 1 0
0 0 1 0 0
0 1 0 1 0
1 0 0 0 1
```

In this matrix:

- The main diagonal (from top-left to bottom-right) and the anti-diagonal (from top-right to bottom-left) contain all 1's.
- All other elements are 0.
- Hence, it's a Jadu Matrix.

### Sample Inputs and Outputs:

Let's check the given sample inputs and outputs:

**Sample Input 0:**

```
5 5
1 0 0 0 1
0 1 0 1 0
0 0 1 0 0
0 1 0 1 0
1 0 0 0 1
```

**Sample Output 0:**

```
YES
```

Explanation: The matrix satisfies the conditions of a Jadu Matrix.

**Sample Input 1:**

```
5 5
1 0 0 0 1
0 1 0 1 0
0 0 0 0 0
0 1 0 1 0
1 0 0 0 1
```

**Sample Output 1:**

```
NO
```

Explanation: The matrix does not have all 1's on the diagonals.

**Sample Input 2:**

```
5 5
1 0 0 0 1
0 1 0 1 0
0 0 1 0 1
0 1 0 1 0
1 0 0 0 1
```

**Sample Output 2:**

```
NO
```

Explanation: Although it has all 1's on the diagonals, it has non-zero elements outside of them.

**Sample Input 3:**

```
5 5
2 0 0 0 1
0 1 0 1 0
0 0 1 0 0
0 1 0 1 0
1 0 0 0 1
```

**Sample Output 3:**

```
NO
```

Explanation: It has non-zero elements outside of the diagonals.

**Sample Input 4:**

```
6 6
1 0 0 0 0 1
0 1 0 0 1 0
0 0 1 1 0 0
0 0 1 1 0 0
0 1 0 0 1 0
1 0 0 0 0 1
```

**Sample Output 4:**

```
YES
```

Explanation: This matrix is a valid Jadu Matrix.

The program correctly identifies whether the given matrices are Jadu Matrices or not according to the provided conditions.
