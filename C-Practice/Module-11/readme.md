# Function with Pointer

## Pointer

- ### Memory size of a pointer :

  The memory size of a pointer in C depends on the architecture of the system you're compiling and running the code on. Typically, on a 32-bit system, a pointer occupies 4 bytes (32 bits), and on a 64-bit system, it occupies 8 bytes (64 bits).

- ### Call by Value

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
