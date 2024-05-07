#include <stdio.h>

// Function prototype for multiply
int multiply(int a, int b);

// Function to add two integers
int add(int x, int y){
    int multiplyAdd = x + y;
    return multiplyAdd;
}

int main()
{
    // giving value to the multiply function and storing it to a variable
    int final = multiply(5, 6);
    printf("%d\n", final);  

    // Printing the multiply function directly and giving value inside inside printf
    printf("%d\n", multiply(7, 10));
    
    // Printing the multiply function by calling it directly and giving value inside inside printf
    printf("%d\n", add(7, 10));
    return 0;
}

// Function of multiply
int multiply(int a, int b){
    return a * b;
}

