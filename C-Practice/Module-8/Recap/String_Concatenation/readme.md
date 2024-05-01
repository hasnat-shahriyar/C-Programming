```c
#include <stdio.h>
#include <string.h>

int main(){
    char a[200], b[100];
    scanf("%s %s", a, b);

    int k = strlen(a);
    for (int i = 0; i <= strlen(a); i++) {
        a[k] = b[i];
        k++;
    }
    printf("%s %s", a, b);
    return 0;
}
```

1. **Declaration of Arrays**:

   ```c
   char a[200], b[100];
   ```

   Here, two character arrays `a` and `b` are declared. `a` is declared to have a size of 200 characters, while `b` is declared to have a size of 100 characters.

2. **Input**:

   ```c
   scanf("%s %s", a, b);
   ```

   The program takes two strings as input, one for `a` and another for `b`. Note that there's no check for the size of the input, so it's assumed that the input strings won't exceed the size of the arrays.

3. **Length Calculation**:

   ```c
   int k = strlen(a);
   ```

   This line calculates the length of the string stored in array `a` using the `strlen` function from the `<string.h>` library. The length is stored in the variable `k`.

4. **Appending String `b` to String `a`**:

   ```c
   for (int i = 0; i <= strlen(b); i++) {
       a[k] = b[i];
       k++;
   }
   ```

   Here, the code iterates over each character of string `b` (including the null terminator `\0`) and appends it to the end of string `a`. It starts at the index `k`, which is the current length of string `a`. Then, `k` is incremented after each character is appended.

   Let's visualize this iteration:

   - Suppose `a` initially contains `"hello"` and `b` contains `"world"`.
   - `k` will be 5 initially (the length of "hello").
   - The loop runs from `i = 0` to `strlen(b)` (which includes the null terminator).
   - At `i = 0`, `b[0]` is `'w'`, so `a[5]` (the sixth position in `a`) is assigned `'w'`, and `k` is incremented to 6.
   - This continues until all characters of `b` are appended to `a`, including the null terminator.

5. **Printing**:

   ```c
   printf("%s %s", a, b);
   ```

   This line prints both strings `a` and `b`.

6. **Incrementing `k`**:
   ```c
   k++;
   ```
   This line inside the loop is used to move to the next position in array `a` after appending a character from `b`. This ensures that the appended characters from `b` are added to the correct position in `a`.

In summary, `char a[200]` and `char b[100]` are chosen as the sizes of `a` and `b` respectively based on assumptions about the maximum length of input strings. `k` is used to keep track of the end of `a`, and it is incremented after each character is appended to `a` from `b`.

Visualizing the concatenation process:

Let's say `a` initially contains "apple" and `b` contains "banana". Then:

1. Initial state:

   ```
   a: | a | p | p | l | e | \0 | ... |
                                  ^
                                  |
                                  k (points to '\0')
   b: | b | a | n | a | n | a | \0 | ... |
                                  ^
                                  |
                                  i (points to 'b')
   ```

2. Loop Iteration 1 (i = 0):

   ```
   a: | a | p | p | l | e | b | ... |
                                  ^
                                  |
                                  k (points to '\0')
   b: | b | a | n | a | n | a | \0 | ... |
                                  ^
                                  |
                                  i (points to 'a')
   ```

3. Loop Iteration 2 (i = 1):

   ```
   a: | a | p | p | l | e | b | a | ... |
                                  ^
                                  |
                                  k (points to '\0')
   b: | b | a | n | a | n | a | \0 | ... |
                                    ^
                                    |
                                    i (points to 'n')
   ```

4. Loop Iteration 3 (i = 2):

   ```
   a: | a | p | p | l | e | b | a | n | ... |
                                      ^
                                      |
                                      k (points to '\0')
   b: | b | a | n | a | n | a | \0 | ... |
                                        ^
                                        |
                                        i (points to 'a')
   ```

5. Loop Iteration 4 (i = 3):

   ```
   a: | a | p | p | l | e | b | a | n | a | ... |
                                        ^
                                        |
                                        k (points to '\0')
   b: | b | a | n | a | n | a | \0 | ... |
                                          ^
                                          |
                                          i (points to 'n')
   ```

6. Loop Iteration 5 (i = 4):

   ```
   a: | a | p | p | l | e | b | a | n | a | n | ... |
                                            ^
                                            |
                                            k (points to '\0')
   b: | b | a | n | a | n | a | \0 | ... |
                                              ^
                                              |
                                              i (points to 'a')
   ```

7. Loop Iteration 6 (i = 5):
   ```
   a: | a | p | p | l | e | b | a | n | a | n | a | ... |
                                              ^
                                              |
                                              k (points to '\0')
   b: | b | a | n | a | n | a | \0 | ... |
                                                ^
                                                |
                                                i (points to '\0')
   ```

After the loop, `k` is incremented to `11`, and the final state of `a` is "applebanana".
