#

# Operators in C Programming

Operators in C programming are symbols that perform operations on operands. They are used to manipulate data and perform various calculations. Let's explore different types of operators in C:

## Arithmetic Operators

Arithmetic operators are used to perform mathematical operations such as addition, subtraction, multiplication, division, and modulus.

- **Addition (+)**: Adds two operands.
- **Subtraction (-)**: Subtracts the second operand from the first.
- **Multiplication (\*)**: Multiplies two operands.
- **Division (/)**: Divides the first operand by the second.
- **Modulus (%)**: Returns the remainder of the division of the first operand by the second.

## Relational Operators

Relational operators are used to compare two operands. They return either true (1) or false (0) based on the comparison.

- **Equal to (==)**: Checks if two operands are equal.
- **Not equal to (!=)**: Checks if two operands are not equal.
- **Greater than (>)**: Checks if the first operand is greater than the second.
- **Less than (<)**: Checks if the first operand is less than the second.
- **Greater than or equal to (>=)**: Checks if the first operand is greater than or equal to the second.
- **Less than or equal to (<=)**: Checks if the first operand is less than or equal to the second.

## Logical Operators

Logical operators are used to perform logical operations such as AND, OR, and NOT.

- **Logical AND (&&)**: Returns true if both operands are true.
- **Logical OR (||)**: Returns true if at least one operand is true.
- **Logical NOT (!)**: Returns the opposite of the operand's value.

## Assignment Operators

Assignment operators are used to assign values to variables.

- **Assignment (=)**: Assigns the value of the right operand to the left operand.
- **Compound Assignment (+=, -=, \*=, /=, %=)**: Performs arithmetic operation on the operands and assigns the result to the left operand.

## Increment and Decrement Operators

Increment and decrement operators are used to increase or decrease the value of a variable by 1.

- **Increment (++)**: Increases the value of the operand by 1.
- **Decrement (--)**: Decreases the value of the operand by 1.

## Bitwise Operators

Bitwise operators perform operations at the bit level.

- **Bitwise AND (&)**: Performs AND operation on each bit of the operands.
- **Bitwise OR (|)**: Performs OR operation on each bit of the operands.
- **Bitwise XOR (^)**: Performs XOR (exclusive OR) operation on each bit of the operands.
- **Bitwise NOT (~)**: Flips all the bits of the operand.
- **Left Shift (<<)**: Shifts the bits of the left operand to the left by the number of positions specified by the right operand.
- **Right Shift (>>)**: Shifts the bits of the left operand to the right by the number of positions specified by the right operand.

## Ternary Operator

The ternary operator is a conditional operator that takes three operands.

- **Ternary Operator (condition ? expr1 : expr2)**: If the condition is true, it evaluates to expr1; otherwise, it evaluates to expr2.

## Example

Here's an example demonstrating the usage of operators in a C program:

```c
#include <stdio.h>

int main() {
    int a = 10, b = 5;
    int sum = a + b;
    int product = a * b;
    int isGreater = (a > b) ? 1 : 0;

    printf("Sum: %d\n", sum);
    printf("Product: %d\n", product);
    printf("Is a greater than b? %s\n", isGreater ? "Yes" : "No");

    return 0;
}
```

<i>Short Note : When performing division in a C program (or many other programming languages), if both operands are integers, the result will be an integer. This means that any fractional part will be truncated, and only the integer part will be returned.

So, in the expression 5 / 2, since both 5 and 2 are integers, the result will be 2.

However, if you want the result to include the fractional part, you need to ensure at least one of the operands is a floating-point number (a number with a decimal point). For example, if you use 5.0 / 2, or 5 / 2.0, or even 5.0 / 2.0, you'll get the result 2.5, because at least one of the operands is a floating-point number, forcing the division to be performed with floating-point arithmetic. </i>

Example :

```c
#include <stdio.h>

int main() {
    // Division with integer operands
    int result_integer = 5 / 2;
    printf("Result with integer operands: %d\n", result_integer); // Output: 2

    // Division with one integer and one floating-point operand
    float result_float1 = 5 / 2.0; // 5 is treated as integer, 2.0 is treated as floating-point
    printf("Result with one integer and one floating-point operand: %f\n", result_float1); // Output: 2.500000

    // Division with both floating-point operands
    float result_float2 = 5.0 / 2.0;
    printf("Result with floating-point operands: %f\n", result_float2); // Output: 2.500000

    return 0;
}
```
