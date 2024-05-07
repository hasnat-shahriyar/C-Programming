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
