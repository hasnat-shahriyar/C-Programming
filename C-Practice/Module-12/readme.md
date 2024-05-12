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

#

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
