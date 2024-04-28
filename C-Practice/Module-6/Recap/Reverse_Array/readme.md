```c
#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);

    int ar[n];
    for (int i = 0; i < n; i++) {
        printf("%d ", &ar[i]);
    }

    int i = 0;
    int j = n - 1;
    while (i < j) {
        int temp = ar[i];
        ar[i] = ar[j];
        ar[j] = temp;
        i++;
        j--;
    }
    for (int i = 0; i < n; i++) {
        printf("%d ", ar[i]);
    }
    return 0;
}
```

Input:

```
5
10 20 30 40 50
```

Detailed visualization.

1. **Initialization**:

   ```c
   int i = 0;
   int j = n - 1;
   ```

   Here, `i` is initialized to 0, which is the index of the first element in the array. `j` is initialized to `n - 1`, where `n` is the size of the array. So, if `n = 5`, then `j` will be `5 - 1 = 4`, which is the index of the last element in the array.

2. **The `while` loop**:

   ```c
   while (i < j) {
       // Swap elements and move towards the center of the array
   }
   ```

   This loop continues as long as `i` is less than `j`. It ensures that the swapping process continues until `i` and `j` cross each other, which would happen when they meet at or pass the middle of the array.

3. **Swapping process inside the loop**:
   ```c
   int temp = ar[i];
   ar[i] = ar[j];
   ar[j] = temp;
   i++;
   j--;
   ```
   - `temp` stores the value of `ar[i]` temporarily to prevent it from being lost when `ar[i]` is overwritten.
   - `ar[i]` is then assigned the value of `ar[j]`, effectively swapping the values at positions `i` and `j`.
   - Next, `ar[j]` is assigned the value stored in `temp`, completing the swap.
   - `i` is then incremented to move towards the middle of the array from the beginning.
   - `j` is decremented to move towards the middle of the array from the end.

Now, let's visualize the swapping process with the given input `10 20 30 40 50`:

- **Initial State**: `i = 0`, `j = 4`

  ```
  Array:  10 20 30 40 50
           ^            ^
           i            j
  ```

- **After the first iteration**:

  - `temp` stores the value `10`.
  - `ar[i]` is assigned the value `50`, and `ar[j]` is assigned the value `10`.

  ```
  Array:  50 20 30 40 10
              ^       ^
              i       j
  ```

- **After the second iteration**:

  - `temp` stores the value `20`.
  - `ar[i]` is assigned the value `40`, and `ar[j]` is assigned the value `20`.

  ```
  Array:  50 40 30 20 10
                 ^ ^
                 i j
  ```

- **After the third iteration**:
  Here, `i` is no longer less than `j`, so the loop terminates.

Thus, the array is reversed: `50 40 30 20 10`.
