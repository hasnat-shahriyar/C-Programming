# Array Operations

## Array : Insert

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

## Array : Remove

```c
#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    int ar[n]; // Declare an array of size n
    for (int i = 0; i < n; i++) {
        scanf("%d", &ar[i]); // Input elements into the array
    }
    int pos;
    scanf("%d", &pos); // Input the position to remove

    // Shift elements to the left starting from the specified position
    for (int i = pos; i < n - 1; i++) {
        ar[i] = ar[i + 1];
    }

    // Print the modified array without the removed element
    for (int i = 0; i < n - 1; i++) {
        printf("%d ", ar[i]);
    }

    return 0;
}
```

Let's consider the example where `n = 5`, and the initial array is `{10, 20, 30, 40, 50}`. We want to remove the element at position `1`.

1. **Input and Initialization:**

   - The code starts by reading the size of the array `n`, which is `5` in our case.
   - Then, it reads `n` elements into the array: `{10, 20, 30, 40, 50}`.
   - Next, it reads the position to remove, which is `1`.

2. **Removing the Element:**

   - The loop `for (int i = pos; i < n - 1; i++)` starts from the specified position to remove (`pos`) and continues until the second-to-last element of the array (`n - 1`).
   - The loop iterates through the array, shifting each element to the left by one position. This effectively removes the element at the specified position.
   - In our example, starting from `i = 1` (the position to remove), it shifts `ar[1] = ar[2]`, `ar[2] = ar[3]`, `ar[3] = ar[4]`.
   - After the loop, the array becomes `{10, 30, 40, 50, 50}`.

3. **Printing the Modified Array:**
   - The loop `for (int i = 0; i < n - 1; i++)` starts from `i = 0` and continues until the second-to-last element of the modified array (`n - 1`).
   - It prints each element of the modified array, effectively skipping the last element (which was shifted and duplicated).
   - In our example, it prints `10 30 40 50`.

Now, let's address the specific parts you asked about:

- `int i = pos; i < n - 1; i++`:
  - Here, `i` is initialized to `pos`, which is the position to start removing elements.
  - The loop continues as long as `i` is less than `n - 1`. This ensures that we stop at the second-to-last element of the array.
- `ar[i] = ar[i + 1];`:
  - This line shifts each element one position to the left, effectively removing the element at the specified position.
- `for (int i = 0; i < n - 1; i++)`:
  - Here, `i` is initialized to `0`, starting from the beginning of the array.
  - The loop continues until `i` is less than `n - 1`, which ensures that we stop at the second-to-last element of the modified array. This is because we have removed one element, so the length of the modified array is `n - 1`.

Let me know if you need further clarification on any part!