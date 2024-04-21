# Array Operations

## Insert

```c
#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    int ar[n + 1]; // Declare an array of size n+1
    for (int i = 0; i < n; i++) {
        scanf("%d", &ar[i]); // Input elements into the array
    }
    int pos, value;
    scanf("%d %d", &pos, &value); // Input the position and value to insert
    for (int i = n; i >= pos + 1; i--) {
        ar[i] = ar[i - 1]; // Shift elements to the right to make space
    }
    ar[pos] = value; // Insert the new value at the specified position
    for (int i = 0; i <= n; i++) {
        printf("%d ", ar[i]); // Output the modified array
    }
    return 0;
}
```

Let's consider an example array and run through the code step by step. Suppose our initial array `ar[]` looks like this:

```
Initial array:  3 7 2 8 5
```

And let's say we want to insert the value `10` at position `2`. So, `pos = 2` and `value = 10`.

Here's what happens:

1. The program reads the size of the array `n`, which is `5` in our case.

2. Then, it reads `n` elements into the array: `3 7 2 8 5`.

3. Next, it reads the position and value to insert. In our example, `pos = 2` and `value = 10`.

4. The loop `for (int i = n; i >= pos + 1; i--)` starts from the last index (`4` in our case) and iterates until `i` becomes less than `pos + 1`. In each iteration, it shifts the elements one position to the right.

   Iteration 1: `i = 4`, `ar[4] = ar[3]`, `ar[3] = ar[2]`, and so on, until it reaches the position `pos + 1`.

5. After the loop, the position `pos` is empty because its value has been shifted to the right.

6. So, it inserts the new value `10` at position `pos` (which is now empty).

7. Finally, it prints the modified array.

Let's visualize the array after each step:

1. Initial array: `3 7 2 8 5`
2. After reading input: `3 7 2 8 5`
3. After reading position and value: `3 7 2 8 5`
4. After shifting elements: `3 7 7 2 8`
5. After inserting new value: `3 10 7 2 8`
6. Final array: `3 10 7 2 8`

<i>

The concept of `pos + 1`.

In the context of the code, `pos + 1` represents the position just after the position where we want to insert the new element.

Here's why it's used:

1. **Insertion Position (`pos`):**

   - `pos` represents the index where we want to insert the new element.
   - Let's say we want to insert the new element at index `pos`.

2. **Position After Insertion (`pos + 1`):**
   - After inserting a new element at index `pos`, we need to shift the elements to the right to make space for it.
   - `pos + 1` represents the index just after the position where we want to insert the new element.
   - This is the index we start shifting elements from.

For example, if `pos = 2`, then `pos + 1 = 3`. This means we start shifting elements from index `3` onwards to the right to make space for the new element at index `2`.

In the loop `for (int i = n; i >= pos + 1; i--)`, `i` starts from the last index (`n`) and iterates backwards until it reaches `pos + 1`. This ensures that we shift elements starting from the position after the insertion point until we reach the insertion point itself.
</i>
