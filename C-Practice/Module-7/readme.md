# String

এক বা একাধিক `character` মিলে `string` তৈরি হয় । সহজ ভাষায় স্ট্রিং হচ্ছে ক্যারেক্টার টাইপের অ্যারে । তবে প্রোগ্রামিংয়ে এটির ব্যবহার এতোই বেশি যে, কোনো কোনো ল্যাঙ্গুয়েজে স্ট্রিংকে আলাদা একটি ডাটা টাইপ হিসেবে ধরা হয় । তবে সি-তে আমরা char টাইপের অ্যারে দিয়েই স্ট্রিংয়ের কাজ করবো ।

In C, a string is a sequence of characters stored in an array of characters terminated by a null character (`'\0'`). Here's a breakdown of how strings work in C:

1. **Character Array**: In C, strings are represented as arrays of characters. Each element of the array holds a single character from the string, and the last element holds the null character (`'\0'`), which indicates the end of the string.

   ```c
   char str[] = "Hello"; // Declaration and initialization of a string
   ```

2. **Null-Termination**: Strings in C are null-terminated, meaning that the null character (`'\0'`) marks the end of the string. This null character is automatically appended by C when you initialize a string using double quotes.

3. **String Functions**: C provides a set of standard library functions for manipulating strings. These functions are declared in the `<string.h>` header file. Some commonly used string functions include `strlen()` (to find the length of a string), `strcpy()` (to copy one string to another), `strcat()` (to concatenate two strings), `strcmp()` (to compare two strings), etc.

4. **Character Pointers**: Strings in C are often manipulated using pointers to characters. Since strings are essentially arrays, a pointer to the first character of a string can be used to access or modify the entire string.

   ```c
   char *str = "Hello"; // Declaration of a string using a pointer
   ```

5. **Character Input/Output**: C provides input and output functions for strings using `printf()` and `scanf()` family of functions. You can use `%s` format specifier with `printf()` and `scanf()` to handle string input/output.

   ```c
   printf("String: %s\n", str); // Output string using printf
   scanf("%s", str); // Input string using scanf
   ```

6. **Mutable vs. Immutable**: In C, strings declared as character arrays are mutable, meaning their contents can be modified. However, strings declared using string literals (like `"Hello"`) are immutable, meaning their contents cannot be directly modified.

   ```c
   char str[] = "Hello"; // Mutable string
   char *str = "Hello";  // Immutable string
   ```

### <i>Example:</i>

```c
#include <stdio.h>

int main() {
    char *str1 = "Hello"; // Declaration of a string using a pointer
    char str2[] = "Hello"; // Declaration of a character array

    printf("String: %s\n", str1); // Output using printf with %s format specifier
    printf("String: %s\n", str2); // Output using printf with %s format specifier

    return 0;
}
```
