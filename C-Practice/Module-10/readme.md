# Function, Scopes, and Pointer

## Function

A function in C programming is like a mini-program within a bigger program. It's a way to organize your code so that you can reuse parts of it without having to write the same code over and over again.

Think of a function like a recipe in a cookbook. The recipe tells you how to make a specific dish, and you can use that recipe whenever you want to make that dish. Similarly, a function in C programming tells the computer how to do a specific task, and you can use that function whenever you need to perform that task.

Here's a simple example of a function in C:

```c
#include <stdio.h>

// This is the function declaration
// It tells the computer that we're going to define a function called "sayHello"
// The "void" means that the function doesn't take any input
// The "{ }" is where we'll write the code for the function
void sayHello() {
    printf("Hello, world!\n");
}

// This is the main function
// It's a special function that gets called when you run the program
int main() {
    // To use our "sayHello" function, we just need to write its name followed by "()"
    sayHello();
    return 0;
}
```

In this example, we have a function called `sayHello` that prints "Hello, world!" to the screen. Then, in the `main` function, we call `sayHello` to actually print the message.

Functions are super useful because they help keep your code organized and make it easier to understand. Plus, they let you reuse code, which saves you time and makes your programs more efficient!

#

In C programming, a function is a block of code that performs a specific task. Functions help in modularizing code, making it easier to understand, debug, and maintain.

Let's break down the example you provided:

```c
return_type name(parameter){
    code
    return what;
}
```

- `return_type`: This specifies the data type of the value that the function will return to the calling code after execution. It could be `int`, `float`, `void` (if the function doesn't return anything), or any other data type.

- `name`: This is the identifier of the function, by which it can be called from other parts of the program. It could be any valid C identifier, such as `main`, `calculate_sum`, `print_message`, etc.

- `parameter`: This is a list of variables (separated by commas) that the function can accept as input. It specifies the data type and the name of each parameter. These parameters are optional; a function may have zero or more parameters.

- `code`: This is the block of statements that define what the function does. It can include variable declarations, assignments, control structures (like if-else, loops), and other function calls.

- `return what;`: This statement is used to return a value from the function to the calling code. `what` can be a variable, a constant, or an expression of the same data type as specified by `return_type`. This statement is optional in functions with a return type of `void` (meaning they don't return anything).

Here's an example illustrating the structure with a simple function that calculates the square of a number:

```c
#include <stdio.h>

// Function prototype
int square(int num);

int main() {
    int result = square(5); // Calling the function
    printf("Square of 5 is: %d\n", result);
    return 0;
}

// Function definition
int square(int num) {
    int result = num * num;
    return result; // Returning the square of the number
}
```

In this example:

- `return_type` is `int` because the function returns an integer value.
- `name` of the function is `square`.
- `parameter` is `int num`, indicating that the function accepts an integer parameter named `num`.
- `code` inside the function calculates the square of the input number.
- `return result;` returns the computed square back to the calling code.

#

Here's an example of a void function:

```c
#include <stdio.h>

// Function prototype
void greet();

int main() {
    // Calling the function
    greet();
    return 0;
}

// Function definition
void greet() {
    printf("Hello, world!\n");
}
```

In this example:

- The return type of the function `greet` is `void`, meaning it doesn't return any value.
- The function `greet` doesn't accept any parameters.
- Inside the function, it simply prints "Hello, world!" to the console.
- Since the function has a return type of `void`, there's no `return` statement.

# Return + No Parameter

In C programming, when you define a function with `void` as its parameter list, it means that the function takes no arguments. Let's go through each example:

1. **Example 1:**

```c
#include <stdio.h>

int add(void){
    int a, b;
    a = 5;
    b = 17;
    int sum = a + b;
    return sum;
}

int main()
{
    int sum = add();
    printf("%d", sum);
    return 0;
}
```

In this example, the `add` function is defined with `void` as its parameter list, meaning it doesn't take any arguments. Inside the `add` function, two integers `a` and `b` are initialized with values 5 and 17 respectively. Then, their sum is calculated and stored in `sum`, which is returned. In `main`, `add()` is called without passing any arguments. The returned value (the sum of `a` and `b`) is stored in `sum` and then printed.

2. **Example 2:**

```c
#include <stdio.h>

int add(){
    int a, b;
    a = 5;
    b = 17;
    int sum = a + b;
    return sum;
}

int main()
{
    int sum = add(100);
    printf("%d", sum);
    return 0;
}
```

In this example, the `add` function is defined without any parameters. Inside the `add` function, `a` and `b` are initialized, their sum is calculated, and returned. However, in `main`, `add(100)` is called, trying to pass an argument to a function that doesn't expect any. This will result in a compiler error because the `add` function doesn't accept any arguments.

3. **Example 3:**

```c
#include <stdio.h>

int add(void){
    int a, b;
    a = 5;
    b = 17;
    int sum = a + b;
    return sum;
}

int main()
{
    int sum = add(100);
    printf("%d", sum);
    return 0;
}
```

In this example, it's similar to the first one. The `add` function is defined with `void` as its parameter list, meaning it doesn't take any arguments. Inside `main`, however, `add(100)` is called, trying to pass an argument to a function that doesn't expect any. This will also result in a compiler error for the same reason as in example 2.

# No Return + Parameter

In this example, the `add` function takes two integer parameters `x` and `y`, calculates their sum, and prints the result. However, it has a return type of `void`, meaning it doesn't return any value. Let's break down the code:

```c
#include <stdio.h>

void add(int x, int y){
    int sum = x + y;
    printf("%d", sum);
}

int main()
{
    int a, b;
    scanf("%d %d", &a, &b);

    add(a, b);
    return 0;
}
```

1. In the `main` function, two integer variables `a` and `b` are declared.
2. The `scanf` function is used to read two integers from the user and store them in `a` and `b`.
3. Then, the `add` function is called with `a` and `b` as arguments.
4. Inside the `add` function, the values of `x` and `y` are added together and stored in the variable `sum`. The sum is then printed using `printf`.
5. Since the return type of `add` is `void`, there is no explicit return statement in the `add` function.

In summary, this code takes two integers from the user, adds them together using a function, and prints the result without returning any value.

In this case, `void` is used as the return type for the `add` function because the function is intended to perform a task (specifically, calculating and printing the sum of two integers) without returning any value.

When a function's purpose is to perform some actions or tasks but doesn't need to return any value to the caller, it is declared with a return type of `void`. This indicates that the function doesn't produce any result that needs to be captured or used by the calling code.

In the `add` function of your example:

```c
void add(int x, int y){
    int sum = x + y;
    printf("%d", sum);
}
```

- The `add` function adds two integers `x` and `y` and prints the result, but it doesn't need to return anything back to the `main` function or any other calling function.
- Therefore, using `void` as the return type appropriately reflects the behavior of the function, which is performing a task (adding and printing) without returning a result.
