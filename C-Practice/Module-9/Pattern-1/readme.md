# Triangle Pattern

To prints a pattern of asterisks (`*`) in a triangular shape. Let's walk through it with an example input value for `n` (let's say `n = 5`).

Here's what the program does:

1. It takes an integer input (`n`) from the user.
2. It initializes two variables: `n` (for input) and `k` (to control the number of asterisks to be printed in each row). `k` starts from 1.
3. It uses two nested `for` loops to print the pattern:

- The outer loop (`for (int i = 1; i <= n; i++)`) controls the number of rows in the pattern.
- The inner loop (`for (int j = 1; j <= k; j++)`) controls the number of asterisks to be printed in each row.

Let's visualize the pattern for `n = 5`:

```
*
**
***
****
*****
```

Now, let's break down how this pattern is generated step by step:

1. **Iteration 1 (i = 1):**

   - Outer loop: `i = 1`, Inner loop: `k = 1`, prints one asterisk.

   ```
   *
   ```

2. **Iteration 2 (i = 2):**

   - Outer loop: `i = 2`, Inner loop: `k = 2`, prints two asterisks.

   ```
   **
   ```

3. **Iteration 3 (i = 3):**

   - Outer loop: `i = 3`, Inner loop: `k = 3`, prints three asterisks.

   ```
   ***
   ```

4. **Iteration 4 (i = 4):**

   - Outer loop: `i = 4`, Inner loop: `k = 4`, prints four asterisks.

   ```
   ****
   ```

5. **Iteration 5 (i = 5):**
   - Outer loop: `i = 5`, Inner loop: `k = 5`, prints five asterisks.
   ```
   *****
   ```

This process continues until the outer loop's condition is met, in this case, until `i` reaches `n`, which is 5.

So, visually, the program starts with one asterisk and adds one more asterisk to each subsequent row until it reaches the desired number of rows specified by the user input `n`.

Additionally, `k++` is used to increment the variable controlling the number of asterisks in each row. It's placed outside the inner loop to ensure it's incremented only once per row. This ensures that each row has an increasing number of asterisks, creating the triangular pattern.

Here's why `k++` is placed outside the inner loop:

1. **Purpose of `k++`:** It increments the value of `k` by 1 after each iteration of the outer loop. This ensures that each row has an increasing number of asterisks, creating the triangular pattern.

2. **Placement outside the inner loop:** Placing `k++` outside the inner loop ensures that `k` is incremented only once per row. If it were placed inside the inner loop, `k` would be incremented multiple times within a single row, leading to incorrect output (more asterisks than intended in each row).

So, `k++` is used to increment the variable controlling the number of asterisks in each row, and it's placed outside the inner loop to ensure it's incremented only once per row.

#

# Reverse Triangle Pattern

1. **Input from You:**

   - Similar to the previous program, we start by asking you for a number (`n`). This number will determine the height of our triangle, but this time, it will be an upside-down triangle.

2. **Setting Up Our Tools:**

   - We set up two tools again: `n`, to remember how tall the triangle should be, and `k`, which will help us decide how many stars to put in each row. This time, we set `k` to be the same as `n` because in each row, we'll print the same number of stars as the height of the triangle decreases.

3. **Building the Upside-Down Triangle:**
   - We use two loops again:
     - The outer loop, which we'll call our "row" loop, starts at `n` and goes down to 1. This loop controls how many rows our triangle will have.
     - The inner loop, our "star" loop, decides how many stars to put in each row. Here, `k` tells us how many stars to print in each row, which decreases as we move down the triangle.

Now, let's visualize how this upside-down triangle looks with `n = 5`:

```
*****
****
***
**
*
```

Let's break it down, step by step:

1. **First Row (Iteration 1):**

   - We're at the top of the triangle (`i = 5`), and we draw five stars (`k = 5`).

   ```
   *****
   ```

2. **Second Row (Iteration 2):**

   - Moving down a level (`i = 4`), we draw four stars (`k = 4`).

   ```
   ****
   ```

3. **Third Row (Iteration 3):**

   - Another level down (`i = 3`), we draw three stars (`k = 3`).

   ```
   ***
   ```

4. **Fourth Row (Iteration 4):**

   - Continuing down (`i = 2`), we draw two stars (`k = 2`).

   ```
   **
   ```

5. **Fifth Row (Iteration 5):**
   - Finally, at the bottom of the triangle (`i = 1`), we draw one star (`k = 1`).
   ```
   *
   ```

This process continues until we've drawn all the rows, descending to the bottom of the upside-down triangle.

Now, about the `k--` part:

1. **Purpose of `k--`:** After drawing each row, we need to prepare for the next row by decreasing the number of stars (`k`) by one. That's what `k--` does; it subtracts one from the number of stars before we draw the next row.

2. **Placement Inside the Row Loop:** We put `k--` inside the outer loop because we want to decrease the number of stars after drawing each row. This way, we'll have one less star in each subsequent row as we move down the triangle.

So, `k--` helps us decrease the number of stars for each row, and it's placed inside the outer loop to ensure we decrease the number of stars after drawing each row, forming our upside-down triangle.
