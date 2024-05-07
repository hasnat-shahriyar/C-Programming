# Function with Pointer

## Pointer

- ### Memory size of a pointer :

  The memory size of a pointer in C depends on the architecture of the system you're compiling and running the code on. Typically, on a 32-bit system, a pointer occupies 4 bytes (32 bits), and on a 64-bit system, it occupies 8 bytes (64 bits).

## Call by Value

In C, when you pass arguments to a function, they are typically passed by value, which means that a copy of the argument's value is passed to the function. Let's explain call by value using the provided code example:

```c
#include <stdio.h>

// Function declaration for fun
void fun(int x){
    // Printing the memory address of the parameter x inside the function
    printf("Address of x inside fun function: %p\n", &x);
}

int main()
{
    // Declaring and initializing variable x
    int x = 10;
    // Printing the memory address of x in the main function
    printf("Address of x inside main function: %p\n", &x);

    // Calling the function fun and passing x as an argument
    fun(x);

    return 0;
}
```

1. In the `main` function, an integer variable `x` is declared and initialized with the value `10`.
2. The `printf` statement inside `main` prints the memory address of the variable `x` using the address-of operator `&`. This address represents the location of `x` in memory.
3. Then, the `fun` function is called from `main`, and the value of `x` is passed as an argument to `fun`.
4. Inside the `fun` function, another `printf` statement prints the memory address of the parameter `x`. This address represents the location of the parameter `x` in memory within the scope of the `fun` function.

Now, let's discuss call by value:

- When `fun(x)` is called from `main`, the value of `x` (which is `10`) is passed to the function `fun`. However, it's important to note that what's passed is a copy of the value of `x`, not the actual variable `x` itself.
- This means that inside the `fun` function, the parameter `x` is a separate variable that holds a copy of the value `10`.
- Therefore, when we print the address of `x` inside `fun`, it shows a different memory address compared to the address of `x` inside `main`. This demonstrates that `x` inside `fun` is a distinct variable occupying its own memory location, independent of `x` in `main`.

In summary, call by value in C involves passing a copy of the value of a variable to a function. Changes made to the parameter inside the function do not affect the original variable passed as an argument. This is why the addresses of `x` inside `main` and `fun` are different, as they refer to separate memory locations.

## Call by Reference

In C, when you pass a pointer to a function, you're effectively implementing call by reference. Call by reference allows the called function to directly access and modify the original variable in the caller's scope. Let's break down the provided code example to understand call by reference:

```c
#include <stdio.h>

// Function declaration for fun, which takes a pointer as a parameter
void fun(int *p)
{
    // Printing the memory address passed from the main function
    printf("Address of x passed from main to fun: %p\n", p);
    // Printing the value pointed to by the pointer passed from the main function
    printf("Value of x passed from main to fun: %d\n", *p);

    // Dereferencing the pointer to change the value of x
    *p = 500;

    // Printing the changed value of x in fun
    printf("Changed the value of x in fun using dereferencing: %d", *p);
}

int main()
{
    // Declaring and initializing variable x
    int x = 100;

    // Printing the memory address of x in the main function
    printf("Address of x in main: %p\n", &x);

    // Calling the fun function and passing the address of x
    fun(&x);

    return 0;
}
```

1. In `main`, an integer variable `x` is declared and initialized with the value `100`.
2. The memory address of `x` in the `main` function is printed using the address-of operator `&`.
3. The `fun` function is called from `main`, and the address of `x` (`&x`) is passed as an argument to `fun`. This means `fun` receives a pointer to the original variable `x`.
4. Inside `fun`, the memory address (`p`) passed from `main` is printed. This address is the same as the address of `x` in `main`, demonstrating that `fun` is operating on the same memory location as `x`.
5. The value pointed to by the pointer (`*p`) is printed, showing the initial value of `x` that was passed from `main`.
6. The value of `x` is modified inside `fun` by dereferencing the pointer (`*p = 500;`). This changes the value of `x` directly in the memory location it refers to.
7. Finally, the modified value of `x` is printed inside `fun`.

In summary, call by reference allows a function to modify the original variable passed as an argument by directly accessing its memory address using a pointer. This enables functions to have side effects and modify variables in the caller's scope.

## Array and Pointer

Relationship between arrays and pointers in C :

```c
#include <stdio.h>

int main()
{
    // Declaring and initializing an array of integers
    int ar[5] = {10, 20, 30, 40, 50};

    // Printing the address of the first element of the array using array indexing (&ar[0])
    printf("Address of index 0: %p\n", &ar[0]);
    // Printing the address of the first element of the array using array name (ar)
    printf("Address of index 0: %p\n", ar);

    // Printing the value of the first element of the array using array indexing (ar[0])
    printf("Value of index 0: %d\n", ar[0]);
    // Printing the value of the first element of the array using dereferencing (*ar)
    printf("Value of index 0: %d\n", *ar);

    // Printing the address of the second element of the array using pointer arithmetic (ar + 1)
    printf("Address of index 1: %p\n", (ar + 1));
    // Printing the value of the second element of the array using pointer arithmetic and dereferencing (*(ar + 1))
    printf("Value of index 1: %d\n", *(ar + 1));
    // Printing the value of the third element of the array using array indexing (ar[2])
    printf("Value of index 2: %d\n", ar[2]);

    return 0;
}
```

1. **Array Declaration and Initialization**:

   - An array of integers `ar` with a size of 5 elements is declared and initialized with values `{10, 20, 30, 40, 50}`.

2. **Printing Addresses and Values**:

   - The code prints the address of the first element of the array `ar` using both array indexing (`&ar[0]`) and array name (`ar`). These two addresses are the same because the array name `ar` represents the address of the first element.
   - The value of the first element of the array is printed using both array indexing (`ar[0]`) and dereferencing the array name (`*ar`). These two expressions also yield the same result.

3. **Pointer Arithmetic**:
   - The code prints the address of the second element of the array using pointer arithmetic (`(ar + 1)`). This expression adds the size of an integer to the address of the first element, effectively pointing to the second element.
   - The value of the second element of the array is printed using pointer arithmetic and dereferencing (`*(ar + 1)`). This expression retrieves the value stored at the memory location pointed to by `(ar + 1)`, which is the address of the second element.
4. **Array Indexing**:
   - Finally, the value of the third element of the array is printed using array indexing (`ar[2]`). This expression directly accesses the value at index 2 of the array.

In summary, in C, arrays can decay into pointers, meaning that the array name can be used as a pointer to the first element of the array. Pointer arithmetic can be used to navigate through array elements, and dereferencing pointers allows access to the values stored at those memory locations.

## Function and Array

This code demonstrates the usage of arrays and pointers in C, particularly in the context of passing arrays to functions. Let's go through it step by step:

```c
#include <stdio.h>

// Function to print array elements using array notation
void fun(int ar[], int n)
{
    // Iterate over each element of the array
    for (int i = 0; i < n; i++)
    {
        // Print the current element
        printf("%d ", ar[i]);
    }
}

// Function to print array elements using pointer notation
void ptr(int *ar, int n)
{
    // Iterate over each element of the array
    for (int i = 0; i < n; i++)
    {
        // Print the current element using pointer notation
        printf("%d ", ar[i]);
    }
}

int main()
{
    // Declare and initialize an integer array
    int ar[5] = {10, 20, 30, 40, 50};

    // Calculate the size of the array in bytes
    int size_array = sizeof(ar);

    // Calculate the number of elements in the array
    int size_array2 = sizeof(ar) / sizeof(int);

    // Print the size of the array in bytes
    printf("Array ar contains %d bytes\n", size_array);

    // Print the number of elements in the array
    printf("Number of elements in array ar: %d\n", size_array2);

    // Call the function fun to print array elements using array notation
    fun(ar, 5);
    printf("\n");

    // Call the function ptr to print array elements using pointer notation
    ptr(ar, 5);

    return 0;
}
```

1. **Function `fun`**:

   - This function takes an array `ar` and the number of elements `n` as parameters.
   - It iterates over each element of the array using array notation (`ar[i]`) and prints the current element.

2. **Function `ptr`**:

   - Similar to `fun`, this function takes an array `ar` and the number of elements `n` as parameters.
   - It iterates over each element of the array using pointer notation (`ar[i]`) and prints the current element.

3. **`main` Function**:
   - An integer array `ar` of size 5 is declared and initialized with values `{10, 20, 30, 40, 50}`.
   - The size of the array in bytes is calculated using `sizeof(ar)` and printed.
   - The number of elements in the array is calculated by dividing the size of the array by the size of an integer (`sizeof(int)`).
   - Both functions `fun` and `ptr` are called to print array elements using array and pointer notation respectively.

In summary, this code illustrates how to pass arrays to functions in C using both array notation and pointer notation. It also demonstrates how to calculate the size of an array and the number of elements it contains.

## Function and String

Concepts of functions and strings in C:

```c
#include <stdio.h>
#include <string.h>

// Function to calculate the length of a string
void name_length(char *str) {
    // Print the string and its length using the strlen() function
    printf("Length of the string '%s' is: %d\n", str, strlen(str));
}

int main() {
    // Declare and initialize a character array (string)
    char str[20] = "Hasnat";

    // Call the function to calculate the length of the string
    name_length(str);

    return 0;
}
```

1. **Strings in C**:
   - In C, strings are represented as arrays of characters (`char` data type) terminated by a null character (`'\0'`). Each character in the string occupies one byte of memory.
   - In the `main` function, a character array `str` of size 20 is declared and initialized with the string `"Hasnat"`. Note that the array size is 20, which is large enough to accommodate the string `"Hasnat"` along with the null character `'\0'` appended automatically by C.
2. **Functions in C**:

   - Functions in C allow you to encapsulate a block of code that performs a specific task, making the code modular and reusable.
   - In this code, there's a function named `name_length` that calculates the length of a given string.
   - The function takes a single parameter `str`, which is a pointer to a character (`char *`). This allows the function to receive the address of the first character of the string passed to it.
   - Inside the `name_length` function, the `strlen()` function from the `<string.h>` library is used to calculate the length of the string `str`. The `strlen()` function returns the number of characters in the string (excluding the null character at the end).
   - The result is printed using `printf()` along with the string itself to show the calculated length.

3. **`main` Function**:
   - In `main`, the character array `str` containing the string `"Hasnat"` is declared and initialized.
   - The `name_length` function is called with the `str` array as an argument. Since arrays decay into pointers when passed to functions, `name_length` receives a pointer to the first character of the array.

In summary, this code example demonstrates how to use functions in C to perform specific tasks (such as calculating the length of a string) and how strings are represented and manipulated using character arrays.
