# Pyramid Pattern

```c
#include <stdio.h>

int main()
{
    int n, s, k; // Declaring variables to hold user input (n), spaces (s), and stars (k)
    scanf("%d", &n); // Taking input from the user for the number of rows to print

    s = n - 1; // Initializing the number of spaces for the first row (n-1)
    k = 1;     // Initializing the number of stars for the first row (1)

    // Outer loop to iterate through each row
    for (int i = 1; i <= n; i++)
    {
        // Inner loop to print spaces before the stars
        for (int j = 1; j <= s; j++)
        {
            printf(" "); // Printing spaces
        }

        // Inner loop to print stars
        for (int j = 1; j <= k; j++)
        {
            printf("*"); // Printing stars
        }
        // Updating values for the next row
        s--;       // Decreasing the number of spaces by 1 for the next row
        k = k + 2; // Increasing the number of stars by 2 for the next row (as the pattern suggests)

        // Moving to the next line after printing spaces and stars for the current row
        printf("\n");
    }

    return 0;
}
```

1. **Initialization:**

   ```c
   int n, s, k; // Declaring variables to hold user input (n), spaces (s), and stars (k)
   scanf("%d", &n); // Taking input from the user for the number of rows to print
   s = n - 1; // Initializing the number of spaces for the first row (n-1)
   k = 1;     // Initializing the number of stars for the first row (1)
   ```

   - `n`: User input for the number of rows.
   - `s`: Number of spaces for each row, initialized to `n - 1`.
   - `k`: Number of stars for each row, initialized to `1`.

2. **Outer Loop (Rows):**

   ```c
   for (int i = 1; i <= n; i++)
   {
       // Inner loops and print statements
   }
   ```

   - Loop iterates through each row, `i` represents the current row number.

3. **Inner Loop for Spaces:**

   ```c
   for (int j = 1; j <= s; j++)
   {
       printf(" "); // Printing spaces
   }
   ```

   - This loop prints the spaces before the stars for each row.
   - The number of spaces decreases with each row (`s--`), as we move down the pyramid.

4. **Inner Loop for Stars:**

   ```c
   for (int j = 1; j <= k; j++)
   {
       printf("*"); // Printing stars
   }
   ```

   - This loop prints the stars for each row.
   - The number of stars increases with each row (`k = k + 2`), as per the pattern of the pyramid.

5. **Updating Values for Next Row:**

   ```c
   s--;       // Decreasing the number of spaces by 1 for the next row
   k = k + 2; // Increasing the number of stars by 2 for the next row
   printf("\n");
   ```

   - `s--`: Decreases the number of spaces by `1` for the next row.
   - `k = k + 2`: Increases the number of stars by `2` for the next row, following the pattern of the pyramid.
   - `printf("\n");` moves to the next line after printing spaces and stars for the current row.

By following this logic, the code prints a pyramid pattern with spaces and stars, where each row has an increasing number of stars and a decreasing number of spaces, forming a pyramid shape.

Let's break down the code step by step with a visualization for each row of the pyramid, assuming the input `n` is `5`.

Of course, let's delve into how the number of asterisks (`k`) is calculated:

1. **Initialization:**

   - `n` is the input number, which is `5`.
   - `s` is the number of spaces, initially set to `n - 1`, which is `4`.
   - `k` is the number of stars, initially set to `1`.

2. **First Row (Iteration 1):**

   - We're at the top of the pyramid (`i = 1`).
   - We start with `s = 4`, so we print `4` spaces.
   - Then, `k` is initially set to `1`, so we print one asterisk (`*`).
   - Result: `    *` (1 asterisk)

3. **Second Row (Iteration 2):**

   - Now, `s` is decremented to `3`.
   - To calculate the number of asterisks (`k`), we add `2` to the previous value of `k`.
   - `k` becomes `3` (previous value `1` + `2`).
   - So, we print `3` asterisks.
   - Result: `   ***` (3 asterisks)

4. **Third Row (Iteration 3):**

   - `s` becomes `2`.
   - To calculate `k`, we add `2` to the previous value of `k`.
   - `k` becomes `5` (previous value `3` + `2`).
   - Print `5` asterisks.
   - Result: `  *****` (5 asterisks)

5. **Fourth Row (Iteration 4):**

   - `s` becomes `1`.
   - To calculate `k`, we add `2` to the previous value of `k`.
   - `k` becomes `7` (previous value `5` + `2`).
   - Print `7` asterisks.
   - Result: ` *******` (7 asterisks)

6. **Fifth Row (Iteration 5):**
   - `s` becomes `0`.
   - To calculate `k`, we add `2` to the previous value of `k`.
   - `k` becomes `9` (previous value `7` + `2`).
   - Print `9` asterisks.
   - Result: `*********` (9 asterisks)

So, in each iteration, the number of asterisks (`k`) is calculated by adding `2` to the previous value of `k`.
The pattern continues until `i` reaches `n`, printing the pyramid shape with the appropriate number of spaces and asterisks for each row. The number of spaces decreases by `1` in each iteration, while the number of asterisks increases by `2`.
This increment ensures the pyramid shape is maintained, with each row having an odd number of asterisks.

# Reverse Pyramid Pattern

Suppose, initial input is 5:

1. **Initialization:**

   - `n` is set to `5`, representing the number of rows in the pyramid.
   - `s` (number of spaces) is initially `0`.
   - `k` (number of asterisks) is calculated as `2 * n - 1`, which is `2 * 5 - 1 = 9`.

2. **First Row (Iteration 1):**

   - `s = 0`, so we don't print any spaces.
   - `k = 9`, so we print `9` asterisks.

   ```
   *********
   ```

3. **Second Row (Iteration 2):**

   - `s` is incremented to `1`, adding one space before the stars.
   - `k` is decremented by `2`, becoming `7`.

   ```
    *******
   ```

4. **Third Row (Iteration 3):**

   - `s` is incremented to `2`, adding two spaces before the stars.
   - `k` is decremented by `2`, becoming `5`.

   ```
     *****
   ```

5. **Fourth Row (Iteration 4):**

   - `s` is incremented to `3`, adding three spaces before the stars.
   - `k` is decremented by `2`, becoming `3`.

   ```
      ***
   ```

6. **Fifth Row (Iteration 5):**
   - `s` is incremented to `4`, adding four spaces before the stars.
   - `k` is decremented by `2`, becoming `1`.
   ```
       *
   ```

This method calculates the number of spaces and asterisks for each row in a straightforward manner. The number of spaces increments by `1` in each iteration, while the number of asterisks decrements by `2`. This ensures the pyramid shape where each row has one more space and two fewer asterisks than the row below it.
