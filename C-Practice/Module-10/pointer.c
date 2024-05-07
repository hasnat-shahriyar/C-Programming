#include <stdio.h>

int main()
{
    // Address of x
    int x = 10;
    // Printing the memory address of x using "%p" format specifier
    printf("%p\n", &x);

    // Declaring a pointer variable and assigning the address of x to it
    int *ptr = &x;
    // Printing the value stored in the pointer variable (which is the address of x)
    printf("%p\n", ptr);

    // Dereferencing the pointer to access the value stored at the memory address it points to (value of x)
    printf("%d\n", *ptr);

    // Modifying the value of x through the pointer
    *ptr = 100;
    // Printing the updated value of x
    printf("%d\n", x);

    return 0;
}
