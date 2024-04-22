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
    int modulus = a % b;    // Modulus: 20 % 3 = 2 (remainder when 20 is divided by 3)
    
    float divisionF = a / c;  // Float Division: 20 / 3.0 = 6.666667 (because 'c' is a float)

    // Printing the results
    printf("Addition : %d\t Substraction : %d\t Multiplication : %d\t Integer Division : %d\t Modulus : %d\t Float Division : %f\t", plus, minus, multiply, division, modulus, divisionF);
    return 0;
}
