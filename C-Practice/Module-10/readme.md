# Function, Scopes, and Pointer

- # Function

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

## Return + No Parameter

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

## No Return + Parameter

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

## No Return + No Parameter

In this code example, the `add` function takes no parameters and also doesn't return any value. Let's break down the code:

```c
#include <stdio.h>

void add(void){
    int a, b;
    scanf("%d %d", &a, &b);
    int sum = a + b;
    printf("%d", sum);
}

int main()
{
    add();
    return 0;
}
```

1. In the `add` function, `void` is specified in the parameter list, indicating that the function takes no arguments.
2. Inside the `add` function:
   - Two integer variables `a` and `b` are declared.
   - The `scanf` function is used to read two integers from the user and store them in `a` and `b`.
   - The sum of `a` and `b` is calculated and stored in the variable `sum`.
   - Finally, the value of `sum` is printed using `printf`.
3. In the `main` function, `add()` is called.
4. This `add()` call doesn't pass any arguments because the `add` function doesn't expect any.
5. After the `add()` function call, `return 0;` is used to indicate the successful execution of the program's main function.

In summary, this code prompts the user to enter two integers, calculates their sum, and prints the result. The function `add` doesn't require any inputs and doesn't produce any outputs (i.e., it has a void return type), making it suitable for tasks that solely perform actions without needing to return a value.

## Built in Functions

- ## Ceiling, Floor, Round, Square Root, Power, and Absolute Value Function

```c

#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int main()
{
    // Ceiling Function
    double x;
    // Input: 3.5
    scanf("%lf", &x);
    // ceil() function returns the smallest integer value greater than or equal to x
    int ceiling_ans = ceil(x);
    // Output: 4
    printf("Ceil : %d\n", ceiling_ans);

    // Floor Function
    // floor() function returns the largest integer value less than or equal to x
    int floor_ans = floor(x);
    // Output: 3
    printf("Floor: %d\n", floor_ans);

    // Round Function
    // round() function returns the nearest integer value to x
    int round_ans = round(x);
    // Output: 4
    printf("Round: %d\n", round_ans);

    // Square root Function
    int r;
    // Input: 25
    scanf("%d", &r);
    // sqrt() function returns the square root of r
    double square_root = sqrt(r);
    // Output: 5
    printf("Square Root: %lf\n", square_root);

    // Power Function
    // with integer value
    int p, q;
    // Input: 3 3
    scanf("%d %d", &p, &q);
    // pow() function returns p raised to the power of q
    int power_ans = pow(p, q);
    // Output: 27
    printf("Power: %d\n", power_ans);

    // with floating value
    double s, t;
    // Input: 2.3 3.5
    scanf("%lf %lf", &s, &t);
    // pow() function also works with floating-point numbers
    double double_power_ans = pow(s, t);
    // Output: 18.45
    printf("Power (Double): %0.2lf\n", double_power_ans);

    // Absolute Value Function
    int e;
    // Input: -1 or -3 or 5
    scanf("%d", &e);
    // abs() function returns the absolute value of e
    int absolute_ans = abs(e);
    // Output: 1 or 3 or 5
    printf("Absolute Value: %d\n", absolute_ans);

    return 0;
}
```

1. **Ceiling Function (`ceil`)**:

   - The `ceil` function returns the smallest integer value that is greater than or equal to the given floating-point number.
   - In the code, `ceil(x)` is used to find the ceiling of the input floating-point number `x`.
   - Example:
     - Input: 3.5
     - Output: 4 (because the smallest integer greater than or equal to 3.5 is 4)

2. **Floor Function (`floor`)**:

   - The `floor` function returns the largest integer value that is less than or equal to the given floating-point number.
   - In the code, `floor(x)` is used to find the floor of the input floating-point number `x`.
   - Example:
     - Input: 3.5
     - Output: 3 (because the largest integer less than or equal to 3.5 is 3)

3. **Round Function (`round`)**:

   - The `round` function returns the nearest integer value to the given floating-point number.
   - In the code, `round(x)` is used to round the input floating-point number `x` to the nearest integer.
   - Example:
     - Input: 3.5
     - Output: 4 (because 3.5 is closer to 4 than to 3)

4. **Square Root Function (`sqrt`)**:

   - The `sqrt` function returns the square root of the given number.
   - In the code, `sqrt(r)` is used to find the square root of the input integer `r`.
   - Example:
     - Input: 25
     - Output: 5 (because the square root of 25 is 5)

5. **Power Function (`pow`)**:

   - The `pow` function calculates the power of a given number with another number.
   - In the code, `pow(p, q)` is used to calculate `p` raised to the power `q`.
   - Example:
     - Input: 3 3
     - Output: 27 (because 3 raised to the power 3 is 27)
     - Input: 2.3 3.5
     - Output: 18.45 (because 2.3 raised to the power 3.5 is approximately 18.45)

6. **Absolute Value Function (`abs`)**:
   - The `abs` function returns the absolute value of the given number.
   - In the code, `abs(e)` is used to find the absolute value of the input integer `e`.
   - Example:
     - Input: -1
     - Output: 1 (because the absolute value of -1 is 1)
     - Input: -3
     - Output: 3 (because the absolute value of -3 is 3)
     - Input: 5
     - Output: 5 (because the absolute value of 5 is 5)

These functions are commonly used in mathematical calculations and are provided by the standard C library headers `<math.h>` and `<stdlib.h>`. They offer convenient ways to perform mathematical operations and manipulations on numbers in C programs.

- # Scopes
  Scope in programming refers to the region of the code where a variable can be accessed. It defines the visibility and lifetime of a variable. Let's explore scope with an example:

```c
#include <stdio.h>

void function1() {
    int a = 5;
    printf("Inside function1: a = %d\n", a);
}

void function2() {
    // This will cause a compilation error
    // printf("Inside function2: a = %d\n", a);
}

int main() {
    int a = 10;
    printf("Inside main before function1: a = %d\n", a);
    function1();
    printf("Inside main after function1: a = %d\n", a);

    // This will cause a compilation error
    // printf("Inside main: a = %d\n", a);

    return 0;
}
```

In this example:

1. We have two functions: `function1` and `function2`, and the `main` function.
2. In `main`, there's a variable `a` declared with the value 10. This variable `a` has scope limited to the `main` function. It can be accessed and modified only within the `main` function.
3. Inside `function1`, there's another variable `a` declared with the value 5. This variable `a` has scope limited to the `function1` function. It can be accessed and modified only within `function1`.
4. If we try to access `a` from `function2`, it will result in a compilation error because `a` is not defined in the scope of `function2`.
5. Similarly, if we try to access `a` outside of `main` or `function1`, it will also result in a compilation error because `a` is not defined in that scope.

So, in summary:

- The variable `a` declared in `main` is only accessible within the `main` function.
- The variable `a` declared in `function1` is only accessible within the `function1` function.
- Variables declared within a function are local to that function and cannot be accessed from outside of it.
- Variables declared outside of any function (global variables) have global scope and can be accessed from any part of the program.

Understanding scope is crucial for writing maintainable and error-free code, as it helps in managing variable access and preventing unintended changes or conflicts.

- ### Global variable:

```c
#include <stdio.h>

int global_var = 100; // Global variable

void function1() {
    printf("Inside function1: global_var = %d\n", global_var);
}

void function2() {
    printf("Inside function2: global_var = %d\n", global_var);
}

int main() {
    printf("Inside main before function1: global_var = %d\n", global_var);
    function1();
    printf("Inside main after function1: global_var = %d\n", global_var);
    function2();

    return 0;
}
```

In this example:

1. We have a global variable `global_var` declared outside of any function. This variable can be accessed from any part of the program.
2. Both `function1` and `function2` have access to the global variable `global_var`. They can read its value and modify it if needed.
3. In `main`, we print the value of `global_var` before and after calling `function1`. Then, we call `function2` to demonstrate that `global_var` is accessible from multiple functions.

This example illustrates how global variables have global scope, meaning they can be accessed from any part of the program, including all functions. However, reliance on global variables should be minimized as they can lead to code that is harder to understand and maintain.
