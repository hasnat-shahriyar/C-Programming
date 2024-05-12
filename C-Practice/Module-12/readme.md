# Recursion

## Call Stack

```c
#include <stdio.h>

// Function definition for printing "world"
void world(){
    printf("world\n");
}

// Function definition for printing "hello" and calling the world() function
void hello(){
    printf("hello\n");
    world(); // Calling the world function to print "world"
}

// Main function
int main()
{
    hello(); // Calling the hello function to print "hello" and "world"
    printf("end\n"); // Printing "end" after hello and world are printed
    return 0; // Returning 0 to indicate successful completion of the program
}

```

Let's break down how the call stack works using this code as an example.

1. When the program starts, it enters the `main` function.
2. Inside `main`, the `hello` function is called.
3. Inside the `hello` function, the `printf("hello\n")` statement is executed, printing "hello" to the console.
4. Then, the `world` function is called from within the `hello` function.
5. Inside the `world` function, the `printf("world\n")` statement is executed, printing "world" to the console.
6. After `world` finishes executing, it returns to the point where it was called, which is inside the `hello` function.
7. Now that `world` has finished executing, the `hello` function continues executing from where it left off. In this case, there are no more statements to execute inside `hello`, so it returns to the point where it was called, which is inside the `main` function.
8. Back in the `main` function, after the `hello` function call, the `printf("end\n")` statement is executed, printing "end" to the console.
9. Finally, the `main` function returns 0, indicating successful completion of the program.

So, the call stack looks something like this:

```
main
  hello
    world
  printf("end\n")
```

Each time a function is called, a new stack frame is added to the call stack. When a function finishes executing, its stack frame is removed from the call stack, and control returns to the calling function. This process continues until the program terminates.

##

```c
#include <stdio.h>

// Function to print "and Shad. "
void shad(){
    printf("and Shad. ");
}

// Function to print "Mehedi, "
void mehedi(){
    printf("Mehedi, ");
}

// Function to print a message along with the names of friends
void hello(){
    printf("I have some friends named: ");
    mehedi(); // Calling mehedi() function to print "Mehedi, "
    printf("Rakib, "); // Printing "Rakib, "
    shad(); // Calling shad() function to print "and Shad. "
}

// Main function
int main()
{
    printf("Hey, I am Nahin\n"); // Printing a greeting message
    hello(); // Calling hello() function to print the message along with friends' names
    printf("With whom I am closest the most\n"); // Printing a closing message
    return 0; // Returning 0 to indicate successful completion
}

```

Let's visualize the call stack as the program runs and see the output printed at each step:

```plaintext
Step 1:
main
  printf("Hey, I am Nahin\n")

Output: Hey, I am Nahin

Step 2:
main
  printf("Hey, I am Nahin\n")
  hello
    printf("I have some friends named: ")
    mehedi
      printf("Mehedi, ")

Output: Hey, I am Nahin
        I have some friends named: Mehedi,

Step 3:
main
  printf("Hey, I am Nahin\n")
  hello
    printf("I have some friends named: ")
    mehedi
      printf("Mehedi, ")
    printf("Rakib, ")

Output: Hey, I am Nahin
        I have some friends named: Mehedi, Rakib,

Step 4:
main
  printf("Hey, I am Nahin\n")
  hello
    printf("I have some friends named: ")
    mehedi
      printf("Mehedi, ")
    printf("Rakib, ")
    shad
      printf("and Shad. ")

Output: Hey, I am Nahin
        I have some friends named: Mehedi, Rakib, and Shad.

Step 5:
main
  printf("Hey, I am Nahin\n")
  hello
    printf("I have some friends named: ")
    mehedi
      printf("Mehedi, ")
    printf("Rakib, ")
    shad
      printf("and Shad. ")
  printf("With whom I am closest the most\n")

Output: Hey, I am Nahin
        I have some friends named: Mehedi, Rakib, and Shad.
        With whom I am closest the most
```

## Recursion

Recursion in C refers to the process in which a function calls itself directly or indirectly. This technique is often used when solving problems that can be broken down into smaller, similar subproblems. In C, a recursive function typically has two parts: the base case(s) and the recursive case(s).

The base case is the condition under which the function stops calling itself and returns a result. It prevents the function from infinitely calling itself and causing a stack overflow.

The recursive case(s) define how the function calls itself with modified arguments to progress towards the base case(s). Each recursive call typically moves the function closer to solving the problem by breaking it down into smaller parts.

Here's a simple example of a recursive function in C to calculate the factorial of a non-negative integer:

```c
#include <stdio.h>

// Function prototype
int factorial(int n);

int main() {
    int num;
    printf("Enter a non-negative integer: ");
    scanf("%d", &num);
    printf("Factorial of %d = %d\n", num, factorial(num));
    return 0;
}

// Recursive function to calculate factorial
int factorial(int n) {
    // Base case: factorial of 0 is 1
    if (n == 0)
        return 1;
    // Recursive case: factorial of n is n times factorial of (n-1)
    else
        return n * factorial(n - 1);
}
```

In this example, the `factorial` function calls itself with `n - 1` until it reaches the base case where `n` is 0, at which point it returns 1. Then, the function starts returning and unwinding the stack, multiplying the returned values to calculate the factorial of the original input.

##

```c
#include <stdio.h>

// Recursive function to print numbers from 1 to 5
void increment(int i)
{
    if (i == 6) return; // Base case: If i reaches 6, exit the function
    printf("%d\n", i); // Print the current value of i
    increment(++i); // Recursive call with incremented value of i
}

int main()
{
    increment(1); // Call the recursive function with initial value 1
    return 0; // Return 0 to indicate successful completion
}
```

Let's explain how recursion works with this code and visualize it:

```plaintext
Step 1:
increment(1)
  i = 1
  Print: 1
  increment(2)

Step 2:
increment(2)
  i = 2
  Print: 2
  increment(3)

Step 3:
increment(3)
  i = 3
  Print: 3
  increment(4)

Step 4:
increment(4)
  i = 4
  Print: 4
  increment(5)

Step 5:
increment(5)
  i = 5
  Print: 5
  increment(6)

Step 6:
increment(6)
  i = 6
  Return (base case reached)
```

Output:

```
1
2
3
4
5
```

Explanation:

- The function `increment` takes an integer parameter `i`.
- It prints the value of `i`.
- Then, it calls itself recursively with `i` incremented by 1.
- This process repeats until the base case (`i == 6`) is reached, at which point the recursion stops.

This sequence of function calls forms a call stack, where each recursive call adds a new stack frame. When the base case is reached, the function calls start returning, unwinding the call stack.

##

```c
#include <stdio.h>

// Recursive function to print numbers in reverse order
void reverse(int i)
{
    if (i == 0) return; // Base case: If i reaches 0, exit the function
    printf("%d\n", i); // Print the current value of i
    reverse(--i); // Recursive call with decremented value of i
}

int main()
{
    reverse(5); // Call the recursive function with initial value 5
    return 0; // Return 0 to indicate successful completion
}
```

Let's visualize how this recursive function works:

```plaintext
Step 1:
reverse(5)
  i = 5
  Print: 5
  reverse(4)

Step 2:
reverse(4)
  i = 4
  Print: 4
  reverse(3)

Step 3:
reverse(3)
  i = 3
  Print: 3
  reverse(2)

Step 4:
reverse(2)
  i = 2
  Print: 2
  reverse(1)

Step 5:
reverse(1)
  i = 1
  Print: 1
  reverse(0)

Step 6:
reverse(0)
  i = 0
  Return (base case reached)
```

Output:

```
5
4
3
2
1
```

Explanation:

- The function `reverse` takes an integer parameter `i`.
- It prints the value of `i`.
- Then, it calls itself recursively with `i` decremented by 1.
- This process repeats until the base case (`i == 0`) is reached, at which point the recursion stops.

Each recursive call adds a new stack frame to the call stack, and when the base case is reached, the function calls start returning, unwinding the call stack. This results in printing the numbers in reverse order.
