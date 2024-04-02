#include <stdio.h>

int main()
{
    // Declaring variables
    int a = 20, b = 3;  // Two integers 'a' and 'b'
    float c = 3;        // A float 'c' with value 3
    
    // Performing arithmetic operations
    int plus = a + b;       // Addition: 20 + 3 = 23
    int minus = a - b;      // Subtraction: 20 - 3 = 17
    int multiply = a * b;   // Multiplication: 20 * 3 = 60
    int division = a / b;   // Integer Division: 20 / 3 = 6 (because both operands are integers)
    
    float divisionF = a / c;  // Float Division: 20 / 3.0 = 6.666667 (because 'c' is a float)

    // Printing the results
    printf("%d\t %d\t %d\t %d\t %f\t", plus, minus, multiply, division, divisionF);
    return 0;
}
