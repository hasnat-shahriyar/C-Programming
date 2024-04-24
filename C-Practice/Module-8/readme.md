# String Operations and Frequency Array

C প্রোগ্রামে, `strings` হচ্ছে সাধারণত arrays of characters terminated by a null character ('\0'). String operations involve manipulating these arrays to perform tasks like concatenation, comparison, copying, and more.

## String Copy

`string copy` (স্ট্রিং কপি) বলতে একটি স্ট্রিংয়ের বিষয়বস্তু অন্য স্ট্রিং-এ কপি করার প্রক্রিয়াকে বোঝায় ।

ধরি দুটো ইনপুট নেওয়া হলো `apple` এবং `orange` to illustrate `string copy`.

ধরি, আমাদের কাছে দুটো arrays of characters আছে:

1. Array `a` containing the string "apple".
2. Array `b` containing the string "orange".

এখন, আমি যদি array `b` এর বিষয়বস্তু কপি করতে চাই array `a`-তে, তাহলে আমাকে string copy operation ব্যবহার করতে হবে. C-তে, `strcpy` ফাংশন অধিকাংশ সময় এই উদ্দেশ্যে ব্যবহৃত হয় । যাইহোক, আরও ভালো বোঝার জন্য আমরা এটিকে ম্যানুয়ালি করে দেখি:

চলুন উপরোক্ত কোডটিকে ভেঙ্গে step by step বোঝার চেষ্টা করি:

```c
#include <stdio.h>
#include <string.h>

int main() {
    char a[100], b[100];
    scanf("%s %s", a, b);
    for (int i = 0; i <= strlen(b); i++) {
        a[i] = b[i];
    }
    printf("%s %s", a, b);
    return 0;
}
```

চলুন এবার আমরা ইনপুট `apple` এবং `orange` দিয়ে ধাপে ধাপে কোড এক্সিকিউশনটি কল্পনা করি:

1. **Initialization**:

   - Two character arrays `a` and `b` are declared, each with a size of `100` characters.
   - Input is provided by the user: `apple` is stored in `a` and `orange` is stored in `b`.

2. **Loop Execution**:

   - The loop iterates over each character of string `b`, which is `orange`.
   - At each iteration, the corresponding character from `b` is copied into `a`.
   - Since `b` has 6 characters (including the `null terminator`), the loop runs 6 times.
   - During each iteration, the character at index `i` in `b` is copied into the same index position in `a`.

   Iteration 1: `a[0] = b[0]` => 'o'
   Iteration 2: `a[1] = b[1]` => 'r'
   Iteration 3: `a[2] = b[2]` => 'a'
   Iteration 4: `a[3] = b[3]` => 'n'
   Iteration 5: `a[4] = b[4]` => 'g'
   Iteration 6: `a[5] = b[5]` => 'e'

   At this point, the loop continues for one extra iteration:

   Iteration 7: `a[6] = b[6]` => '\0' (`null terminator`)

   After this extra iteration, the loop terminates.

3. **Printing**:

   - `printf` prints the contents of `a` and `b`.
   - Since `a` now holds `orange` due to the string copy operation, the output of `printf` would be:

     ```
     orange orange
     ```

So, the final output is `orange orange`. This occurs because the loop condition `i <= strlen(b)` allows the loop to copy the null terminator from `b` to `a`, resulting in `a` being terminated with '\0' just like `b`.

The line `i <= strlen(b)` in the loop condition allows the loop to execute one extra iteration beyond the length of the string in `b`, which results in copying the null character (`'\0'`) from `b` to `a`. As a result, `a` becomes an exact copy of `b`, and both strings are printed. However, the loop condition is incorrect because it copies one extra character, which might not be the intended behavior. It's better to use `i < strlen(b)` to copy only the characters of `b` excluding the null character.
