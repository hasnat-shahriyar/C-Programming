Version 1:

```c
#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    int ar[n];
    for (int i = 0; i < n; i++) {
        scanf("%d", &ar[i]);
    }
    int zero = 0, one = 0, two = 0;
    for (int i = 0; i < n; i++) {
        if (ar[i] == 0) {
            zero++;
        }
        if (ar[i] == 1) {
            one++;
        }
        if (ar[i] == 2) {
            two++;
        }
    }
    printf("Zero = %d\n", zero);
    printf("One = %d\n", one);
    printf("Two = %d\n", two);
    return 0;
}
```

Version 2:

```c
#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    int ar[n];
    for (int i = 0; i < n; i++) {
        scanf("%d", &ar[i]);
    }
    int count[7] = {0};
    for (int i = 0; i < n; i++) {
        if (ar[i] == 0) {
            count[0]++;
        }
        if (ar[i] == 1) {
            count[1]++;
        }
        if (ar[i] == 2) {
            count[2]++;
        }
        if (ar[i] == 3) {
            count[3]++;
        }
    }
    printf("Zero = %d\n", count[0]);
    printf("One = %d\n", count[1]);
    printf("Two = %d\n", count[2]);
    printf("Three = %d\n", count[3]);
    return 0;
}
```

Suppose the input is `8 0 0 1 1 1 2 2 3`.

**Version 1 Explanation:**

1. The code reads an integer `n` from the input.
2. It then reads `n` integers into an array `ar`.
3. Three variables `zero`, `one`, and `two` are initialized to 0. These variables will count the occurrences of 0s, 1s, and 2s respectively.
4. It iterates over the array `ar` and increments the respective counter variable based on the value of `ar[i]`.
5. Finally, it prints the counts of 0s, 1s, and 2s.

**Visualization:**
For the input `8 0 0 1 1 1 2 2 3`:

- The `zero` variable will be incremented twice.
- The `one` variable will be incremented three times.
- The `two` variable will be incremented twice.
- The `three` variable will not be incremented because there are no occurrences of 3.
- Final output:
  ```
  Zero = 2
  One = 3
  Two = 2
  ```

**Version 2 Explanation:**

1. Similar to version 1, it reads an integer `n` from the input and then `n` integers into an array `ar`.
2. However, instead of separate variables, it initializes an array `count` of size 7 (although we only use the first four indices). This array will store the counts of numbers 0 to 3.
3. It iterates over the array `ar` and increments the respective index in the `count` array based on the value of `ar[i]`.
4. Finally, it prints the counts of 0s, 1s, 2s, and 3s.

**Visualization:**
For the input `8 0 0 1 1 1 2 2 3`:

- `count[0]` will be incremented twice.
- `count[1]` will be incremented three times.
- `count[2]` will be incremented twice.
- `count[3]` will be incremented once.
- Final output:
  ```
  Zero = 2
  One = 3
  Two = 2
  Three = 1
  ```

In version 2, by using an array, it's more scalable if the range of numbers increases, but in version 1, variables are used directly, which might be more intuitive and straightforward for smaller ranges.

#

Version 3:

```c
#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    int ar[n];
    for (int i = 0; i < n; i++) {
        scanf("%d", &ar[i]);
    }
    int count[9] = {0};
    for (int i = 0; i < n; i++) {
        int val = ar[i];
        count[val]++;
    }
    for (int i = 0; i <= 9; i++) {
        printf("%d - %d\n", i, count[i]);
    }

    return 0;
}
```

Suppose the input is `8 0 0 1 1 1 2 2 3`.

**Explanation:**

1. The code starts by reading an integer `n` from the input.
2. It then reads `n` integers into an array `ar`.
3. An array `count` of size 9 is initialized with all elements set to 0. This array will store the counts of numbers from 0 to 8.
4. It iterates over the array `ar`. For each element `ar[i]`, it increments the corresponding index in the `count` array.
5. After counting the occurrences of each number, it iterates over the `count` array and prints the count for each number from 0 to 8.

**Visualization:**
For the input `8 0 0 1 1 1 2 2 3`:

- `count[0]` will be incremented twice.
- `count[1]` will be incremented three times.
- `count[2]` will be incremented twice.
- `count[3]` will be incremented once.
- All other elements of `count` will remain 0.
- Final output:
  ```
  0 - 2
  1 - 3
  2 - 2
  3 - 1
  4 - 0
  5 - 0
  6 - 0
  7 - 0
  8 - 0
  ```

This version follows a similar logic as version 2, but it's more scalable as it can handle a wider range of numbers by adjusting the size of the `count` array accordingly.
