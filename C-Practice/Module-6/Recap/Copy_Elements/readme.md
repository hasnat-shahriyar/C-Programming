```c
#include <stdio.h>

int main(){
    int n;
    scanf("%d", &n);
    int a[n];
    for (int i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }

    int m;
    scanf("%d", &m);
    int b[m];
    for (int i = 0; i < m; i++) {
        scanf("%d", &b[i]);
    }

    int ans[n+m];
    for (int i = 0; i < n; i++) {
        ans[i] = a[i];
    }
    int i = n;
    for (int j = 0; j < m; j++) {
        ans[i] = b[j];
        i++;
    }
    for (int i = 0; i < n+m; i++) {
        printf("%d ", ans[i]);
    }
    return 0;
}
```

Input:

```
3
10 20 30
2
40 50
```

1. **Declaration of `ans` array**:

   ```c
   int ans[n+m];
   ```

   Here, `ans` is an array of size `n + m`, which means it can hold the combined elements of both arrays `a` and `b`.

2. **Copying elements from array `a` to `ans`**:

   ```c
   for (int i = 0; i < n; i++) {
       ans[i] = a[i];
   }
   ```

   This loop copies the elements of array `a` into the `ans` array, starting from index `0` and going up to `n-1`.

3. **Initializing index `i` for array `b`**:

   ```c
   int i = n;
   ```

   This sets the starting index for adding elements from array `b` into `ans`. Since we've already copied `n` elements from array `a` into `ans`, we start adding elements from array `b` at index `n` of `ans`.

4. **Adding elements from array `b` to `ans`**:

   ```c
   for (int j = 0; j < m; j++) {
       ans[i] = b[j];
       i++;
   }
   ```

   Here, `j` iterates over the elements of array `b`. For each element, it's added to the `ans` array at index `i`, and then `i` is incremented. This continues until all elements of array `b` are added to `ans`.

5. **Printing the `ans` array**:
   ```c
   for (int i = 0; i < n+m; i++) {
       printf("%d ", ans[i]);
   }
   ```
   This loop prints all the elements of the `ans` array, which now holds the merged elements of arrays `a` and `b`.

Now, let's visualize the process with the given input:

- **Arrays**:

  - Array `a`: `10 20 30`
  - Array `b`: `40 50`

- **Initializing `ans` array**:

  ```
  ans: [ ][ ][ ][ ][ ]
  ```

- **Copying elements from array `a`**:

  ```
  ans: [10][20][30][ ][ ]
  ```

- **Initializing index `i` for array `b`**:

  ```
  ans: [10][20][30][ ][ ]
                 ^
                 i
  ```

- **Adding elements from array `b`**:
  After each iteration, `i` is incremented:

  ```
  ans: [10][20][30][40][ ]
                      ^
                      i
  ans: [10][20][30][40][50]
                         ^
                         i
  ```

- **Printing the `ans` array**:
  ```
  10 20 30 40 50
  ```

So, the final merged array is `10 20 30 40 50`.
