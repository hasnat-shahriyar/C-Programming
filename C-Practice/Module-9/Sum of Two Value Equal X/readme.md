# Sum of Two Value Equal to X

```c

#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n); // Taking input for the size of the array 'n'
    int ar[n]; // Declaring an array of size 'n'

    // Loop to read 'n' integers and store them in the array 'ar'
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &ar[i]); // Reading and storing each integer in the array
    }

    int x;
    scanf("%d", &x); // Taking input for the target sum 'x'

    // Nested loop to find pairs of elements whose sum equals 'x'
    for (int i = 0; i < n - 1; i++) // Loop through each element in the array (except the last one)
    {
        for (int j = i + 1; j < n; j++) // Loop through the elements after the current element
        {
            if(ar[i] + ar[j] == x) // If the sum of current pair equals 'x'
            {
                printf("%d %d\n", ar[i], ar[j]); // Print the pair
            };
        }
    }
    return 0; // Indicating successful completion of the program
}

```

This code takes an array of integers as input, finds pairs of integers within the array whose sum equals a given target value `x`, and prints these pairs. Let's break down how it works with the given input:

1. **Input:**

   - The array has 5 elements: `5 3 7 2 10`.
   - The target sum `x` is `9`.

2. **Initialization:**

   - An integer array `ar` of size `n` (5 in this case) is declared to store the input integers.

3. **Reading Input:**

   - The first loop reads `n` integers into the array `ar`.

4. **Finding Pairs:**
   - The nested loop iterates through each pair of integers in the array `ar`.
   - For each pair `(ar[i], ar[j])`, where `i < j`:
     - It checks if the sum of the pair equals `x`.
     - If the sum equals `x`, it prints the pair `(ar[i], ar[j])`.

Now, let's visualize the process of finding pairs whose sum is equal to `x = 9`:

1. **Pair Combinations:**
   - Iteration 1: `(5, 3)`. Sum: `5 + 3 = 8`. Not equal to `9`.
   - Iteration 2: `(5, 7)`. Sum: `5 + 7 = 12`. Not equal to `9`.
   - Iteration 3: `(5, 2)`. Sum: `5 + 2 = 7`. Not equal to `9`.
   - Iteration 4: `(5, 10)`. Sum: `5 + 10 = 15`. Not equal to `9`.
   - Iteration 5: `(3, 7)`. Sum: `3 + 7 = 10`. Not equal to `9`.
   - Iteration 6: `(3, 2)`. Sum: `3 + 2 = 5`. Not equal to `9`.
   - Iteration 7: `(3, 10)`. Sum: `3 + 10 = 13`. Not equal to `9`.
   - Iteration 8: `(7, 2)`. Sum: `7 + 2 = 9`. Equal to `9`. Print `7 2`.

So, the output is `7 2`, which represents the pair of integers `7` and `2` whose sum is `9`.

#

- # `n - 1`

Let's break down the loop condition `int i = 0; i < n - 1; i++` with `n` being 5:

1. **Initialization:**

   - `i` is initialized to `0`, which represents the index of the first element in the array.
   - `n` is the total number of elements in the array, which is `5`.

2. **Loop Condition:**

   - `i < n - 1` ensures that the loop iterates until `i` reaches the second-to-last element of the array.

3. **Explanation:**

   - When `n` is `5`, `n - 1` is `4`.
   - The loop condition `i < n - 1` ensures that `i` iterates up to `4`, which is the index of the fourth element in the array.
   - This loop condition is used to avoid unnecessary comparison between the last element and itself, as there are no elements after the last one.

4. **Why `n - 1`?**

   - In most cases where you iterate over an array, you want to stop before reaching the last element because there's nothing after it to pair with.
   - For example, if `n` is `5`, you would compare the first element with the second, third, fourth, and fifth elements. However, you don't need to compare the last element with anything because there are no elements after it.

5. **Iteration:**
   - The loop iterates through `i = 0` to `i = 3`, inclusive, which corresponds to indices `0` to `4`.
   - This ensures that every pair of distinct elements in the array is compared exactly once, without comparing an element with itself or with elements beyond the last one.

So, `n - 1` is used in the loop condition to ensure that the loop iterates through all the relevant pairs of elements in the array without unnecessary comparisons.

#

- # `i + 1`
  The line `int j = i + 1; j < n; j++` is setting up an inner loop for comparing each element in the array with every other subsequent element, avoiding redundant comparisons and ensuring that each pair is compared only once.

Let's break it down, assuming `n` is 5:

1. **Initialization:**

   - `i` represents the index of the current element being compared.
   - `j` represents the index of the element that the current element is compared against.

2. **Setting `j` to `i + 1`:**

   - `j` is initialized to `i + 1`, which ensures that we start comparing the current element (`ar[i]`) with the next element (`ar[j]`) in the array.
   - By starting `j` at `i + 1`, we avoid comparing an element with itself and also prevent comparing elements in reverse order or comparing the same pair of elements more than once.

3. **Loop Condition:**

   - `j < n` ensures that `j` iterates until the end of the array (`n` elements).

4. **Iteration:**
   - With `i` starting from `0`, for each iteration of the outer loop, `j` starts from `i + 1`.
   - For `i = 0`, `j` starts from `1`.
   - For `i = 1`, `j` starts from `2`.
   - This ensures that each element is compared with every subsequent element exactly once, avoiding duplicate comparisons and covering all possible pairs of elements in the array.

In essence, by using `j = i + 1`, we ensure that each element is compared with all subsequent elements, covering all unique pairs in the array while avoiding unnecessary comparisons.

#
