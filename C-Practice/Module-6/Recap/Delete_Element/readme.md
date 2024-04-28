```c
#include <stdio.h>

int main(){
    int n;
    scanf("%d", &n);
    int ar[n];
    for (int i = 0; i < n; i++) {
        scanf("%d", &ar[i]);
    }
    // Position and Value
    int pos;
    scanf("%d", &pos);

    for (int i = pos; i < n-1; i++) {
        ar[i] = ar[i+1];
    }

    for (int i = 0; i < n-1; i++) {
        printf("%d ", ar[i]);
    }
    return 0;
}
```

### Step-by-Step Explanation

1. **Input `n` and Array Elements**:

   - `n` is taken as input from the user, which represents the size of the array.
   - Array `ar` of size `n` is declared to store the elements.
   - The elements of the array are inputted by the user and stored in `ar`.

2. **Input Position**:

   - The position (`pos`) and value are inputted from the user. This position represents the index of the array where an element is to be deleted.

3. **Delete Element at Position**:

   - Starting from the given position (`pos`), the loop iterates until the second last element of the array (`n-1`).
   - Each element at index `i` is replaced by the element at the next index (`i+1`). This effectively shifts all elements to the left, overwriting the element at the given position.

4. **Print Array After Deletion**:
   - The modified array, with the element at the given position removed, is printed.

### Visualization with Input: 5, 10 20 30 40 50, 2

#### Initial Array: `[10, 20, 30, 40, 50]`

- **Position to Delete: 2** (0-based index)
- **Value at Position 2: 30**

#### Deletion Process:

1. Start from index 2 (position to delete):

   | Index | Element |
   | ----- | ------- |
   | 0     | 10      |
   | 1     | 20      |
   | 2     | ~~30~~  |
   | 3     | 40      |
   | 4     | 50      |

2. Shift elements one position to the left:

   | Index | Element |
   | ----- | ------- |
   | 0     | 10      |
   | 1     | 20      |
   | 2     | 40      |
   | 3     | 50      |
   | 4     | 50      |

#### Final Array (After Deletion): `[10, 20, 40, 50]`

### Explanation of Loop Bounds

- **`for (int i = pos; i < n-1; i++)`:**

  - `i` starts from the position where the element is to be deleted (`pos`).
  - Loop continues until the second last element of the array (`n-1`) to avoid accessing out-of-bounds memory during the deletion process.

- **`for (int i = 0; i < n-1; i++)`:**
  - This loop is used to print the array after the deletion.
  - It iterates from index `0` to `n-2` (second last index) because the last element has been effectively removed from the array.
