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

##

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

Let's walk through how this program calculates the factorial of a non-negative integer using recursion:

1. The program starts in the `main` function.
2. It prompts the user to enter a non-negative integer.
3. The user inputs a number, which is stored in the variable `num`.
4. Then, it calls the `factorial` function with the input number `num` as an argument.
5. Inside the `factorial` function:
   - If the input `n` is 0, it returns 1, as the factorial of 0 is defined to be 1 (base case).
   - Otherwise, it recursively calls itself with the argument `(n - 1)` and multiplies the result by `n` (recursive case).
6. This recursion continues until `n` becomes 0, at which point the base case is reached, and the function returns 1.
7. As the recursive calls return, each value of `n` is multiplied to calculate the factorial.
8. Finally, the result is returned to the `main` function, which prints the factorial of the input number.

Let's trace an example:

Suppose the user enters `5`:

- The `factorial` function is called with `n = 5`.
  - `n` is not 0, so it calls `factorial(4)`.
    - `factorial(4)` calls `factorial(3)`.
      - `factorial(3)` calls `factorial(2)`.
        - `factorial(2)` calls `factorial(1)`.
          - `factorial(1)` calls `factorial(0)`.
            - `factorial(0)` returns 1 (base case).
          - `factorial(1)` returns 1 \* 1 = 1.
        - `factorial(2)` returns 2 \* 1 = 2.
      - `factorial(3)` returns 3 \* 2 = 6.
    - `factorial(4)` returns 4 \* 6 = 24.
  - `factorial(5)` returns 5 \* 24 = 120.

So, the factorial of 5 is calculated to be 120.

##

- ## Array Printing using Recursion

```c
#include <stdio.h>

// Recursive function to print elements of an array
void print_array(int arr[], int n, int i)
{
    if (i == n) return; // Base case: If i reaches the size of the array, exit the function
    printf("%d\n", arr[i]); // Print the current element of the array
    print_array(arr, n, ++i); // Recursive call with incremented value of i
}

int main()
{
    int n;
    scanf("%d", &n); // Read the size of the array from the user

    int ar[n]; // Declare an array of size n
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &ar[i]); // Read each element of the array from the user
    }
    print_array(ar, n, 0); // Call the recursive function to print the array elements
    return 0; // Return 0 to indicate successful completion
}
```

Let's visualize how this program prints the elements of an array using recursion:

Suppose the user inputs the array size as 5 and the elements of the array are {10, 20, 30, 40, 50}.

```plaintext
Step 1:
print_array(ar, 5, 0)
  i = 0
  Print: ar[0] = 10
  print_array(ar, 5, 1)

Step 2:
print_array(ar, 5, 1)
  i = 1
  Print: ar[1] = 20
  print_array(ar, 5, 2)

Step 3:
print_array(ar, 5, 2)
  i = 2
  Print: ar[2] = 30
  print_array(ar, 5, 3)

Step 4:
print_array(ar, 5, 3)
  i = 3
  Print: ar[3] = 40
  print_array(ar, 5, 4)

Step 5:
print_array(ar, 5, 4)
  i = 4
  Print: ar[4] = 50
  print_array(ar, 5, 5)

Step 6:
print_array(ar, 5, 5)
  i = 5
  Return (base case reached)
```

Output:

```
10
20
30
40
50
```

Explanation:

- The `print_array` function takes three parameters: the array `arr`, its size `n`, and the current index `i`.
- It prints the element at index `i` of the array.
- Then, it calls itself recursively with the index incremented by 1.
- This process repeats until the base case (`i == n`) is reached, at which point the recursion stops.
- Each recursive call prints one element of the array until all elements are printed.

This visualization illustrates how recursion is used to print the elements of an array without using loops.

##

Recursion to print numbers in reverse order from 5 down to 1:

```c

#include <stdio.h>

// Recursive function to print numbers in reverse order
void decrement_reverse_order(int i)
{
    if(i == 6) return; // Base case: If i reaches 6, exit the function
    decrement_reverse_order(i+1); // Recursive call with incremented value of i
    printf("%d\n", i); // Print the current value of i after the recursive call returns
}

int main()
{
    decrement_reverse_order(1); // Call the recursive function with initial value 1
    return 0; // Return 0 to indicate successful completion
}
```

Let's visualize how this recursive function prints numbers in reverse order:

```plaintext
Step 1:
decrement_reverse_order(1)
  decrement_reverse_order(2)
    decrement_reverse_order(3)
      decrement_reverse_order(4)
        decrement_reverse_order(5)
          decrement_reverse_order(6)
          Return (base case reached)
        Print: 5
      Print: 4
    Print: 3
  Print: 2
Print: 1
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

- The `decrement_reverse_order` function takes an integer parameter `i`.
- If `i` reaches 6, it returns without printing anything (base case).
- Otherwise, it calls itself recursively with `i+1`.
- This recursive call continues until `i` reaches 6.
- Then, as the recursive calls return, each value of `i` is printed in reverse order.
