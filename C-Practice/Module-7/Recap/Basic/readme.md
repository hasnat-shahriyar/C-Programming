In C, a string is an array of characters terminated by a null character (`\0`). Let's look at the code:

```c
#include <stdio.h>

int main(){
    char str[6]; // Declaration of a character array with size 6

    str[0] = 'h'; // Assigning 'h' to the first element of the array
    str[1] = 'e'; // Assigning 'e' to the second element
    str[2] = 'l'; // Assigning 'l' to the third element
    str[3] = 'l'; // Assigning 'l' to the fourth element
    str[4] = 'o'; // Assigning 'o' to the fifth element
    str[5] = '\0'; // Assigning the null terminator to the sixth element

    printf("%s\n", str); // Printing the string using printf

    // Or we can do this by not assigning the null value
    char b[4]; // Declaration of another character array with size 4

    b[0] = 'h'; // Assigning 'h' to the first element of the array
    b[1] = 'e'; // Assigning 'e' to the second element
    b[2] = 'y'; // Assigning 'y' to the third element

    printf("%s", b); // Printing the string using printf
    return 0;
}
```

Explanation:

1. `char str[6];`: This line declares an array of characters named `str` with a size of 6. This array can hold a string of up to 5 characters plus a null terminator (`\0`).

2. Assigning individual characters to `str[0]`, `str[1]`, ..., `str[4]`: Here, each element of the array is assigned a character to form the string "hello".

3. `str[5] = '\0';`: The null terminator (`'\0'`) is explicitly assigned to the last element of `str`. This is crucial because it tells C where the string ends. Without this null terminator, functions that operate on strings wouldn't know where the string ends, leading to undefined behavior.

4. `printf("%s\n", str);`: This line prints the string stored in `str` using the `%s` format specifier in `printf`. It starts printing from the memory address of `str` until it encounters the null terminator.

5. Declaration of `char b[4];`: This line declares another character array named `b`, this time with a size of 4.

6. Assigning individual characters to `b[0]`, `b[1]`, `b[2]`: Similar to `str`, characters 'h', 'e', and 'y' are assigned to the first three elements of array `b`.

7. `printf("%s", b);`: This line prints the string stored in `b`. Since there's no null terminator explicitly assigned to the fourth element of `b`, `printf` will continue printing until it encounters a null character (`'\0'`) in memory, which could lead to unpredictable behavior.

In the given code snippet, we've declared an array `b` of size `4` and assigned characters to its first three elements without explicitly including a null terminator. Then, you printed this array using `printf("%s", b);`.

Technically, what happens here is that `printf` starts printing characters from the memory address of `b[0]` until it encounters a null character (`'\0'`). However, since you didn't explicitly include a null terminator in `b`, `printf` continues printing until it happens to encounter a null character somewhere else in memory. This behavior is undefined and can lead to unpredictable results.

While it might appear to "work" in some cases, it's not considered good practice and should be avoided. Relying on undefined behavior can lead to bugs that are difficult to debug and can cause your program to behave inconsistently across different environments or compiler optimizations.

To ensure the correctness and portability of your code, always terminate strings properly with a null character (`'\0'`). This way, you explicitly define the end of the string, and functions like `printf` can reliably print the string without unexpected behavior.

So, while you technically can do this, it's strongly recommended not to rely on implicit null terminators and to always explicitly include them in your strings for clarity and reliability.

In summary, the null terminator (`'\0'`) is essential for properly terminating strings in C, allowing functions like `printf` to know where the string ends. Always ensure that strings are properly null-terminated to avoid unexpected behavior.

#

```c
#include <stdio.h>
#include <string.h>

int main(){
    // char a[5]; // output : hell
    char a[6]; // output : hello
    fgets(a, sizeof(a)/sizeof(char), stdin);
    printf("%s", a);

    return 0;
}
```

In this code, you have an array `a` of characters (a string) with a size of either 5 or 6, depending on the commented line. Let's go through it step by step:

1. **Declaration of Array `a`:**

   - When you declare `char a[5];`, you are creating an array `a` capable of holding 5 characters, plus one extra for the null terminator '\0'. Therefore, it can store strings up to 4 characters long.
   - When you declare `char a[6];`, you are creating an array `a` capable of holding 6 characters, plus one extra for the null terminator '\0'. Therefore, it can store strings up to 5 characters long.

2. **fgets Function:**

   - `fgets()` is used to read a string from the standard input (in this case, the keyboard) and store it in the array `a`.
   - The size of `a` is passed as the second argument, which is determined by `sizeof(a)/sizeof(char)`. This calculates the size of the array in bytes and divides it by the size of a single character, effectively giving you the length of the array.

3. **Printing the String:**
   - Finally, the string stored in `a` is printed using `printf()`.

Now, let's discuss how changing the size of the array affects the output:

- When `char a[5];` is used:

  - The array can hold a maximum of 5 characters, including the null terminator.
  - If you input "hello" (which is 6 characters including the null terminator), only the first 5 characters will be stored in `a` ("hello" without the null terminator), resulting in `"hell"` being printed.

- When `char a[6];` is used:
  - The array can hold a maximum of 6 characters, including the null terminator.
  - If you input "hello", all 6 characters will be stored in `a` ("hello" with the null terminator), resulting in `"hello"` being printed.

In summary, changing the size of the array from 5 to 6 allows it to store one more character, affecting how much of the input string can be stored and subsequently printed.

#

# Size VS Length

**Size:** Think of it like the number of seats in a classroom. If a classroom has 20 seats, its size is 20. Similarly, the size of something, like an array in programming, tells you how much space is available to hold things, like characters in a string.

**Length:** Now, think of it like the number of students sitting in those seats. If there are 15 students in the classroom, the length is 15. In programming, the length of something, like a string, tells you how many characters are actually in it.

So, if you have an array (like a classroom) that can hold 5 characters, its size is 5. But if you put "hello" into it, which has 5 characters, the length of what's inside the array is also 5. If the array's size is smaller than the length of what you want to put into it, some characters might not fit, just like some students wouldn't fit in a smaller classroom.

#
