#

# Understanding Basic Syntax and Tokens in C Programming

In C programming, a program is built using various elements called tokens. These tokens are the building blocks of C code and include:

## Keywords

Keywords are reserved words in C that have predefined meanings and cannot be used for other purposes. Examples include `int`, `char`, `if`, `else`, `for`, `while`, `return`, etc.

## Identifiers

Identifiers are user-defined names used to represent variables, functions, arrays, etc. in a program. They must follow certain rules:

- Start with a letter (a-z, A-Z) or an underscore (`_`).
- Can be followed by letters, digits (0-9), or underscores.
- Case-sensitive (`variable` and `Variable` are different).

## Constants

Constants are fixed values that do not change during program execution. There are different types of constants:

- Integer Constants: Whole numbers like `123`, `-45`, `0`.
- Floating-point Constants: Numbers with a decimal point like `3.14`, `-0.5`.
- Character Constants: Single characters enclosed in single quotes like `'A'`, `'b'`, `'5'`.
- String Constants: Sequences of characters enclosed in double quotes like `"hello"`, `"world"`.

## Operators

Operators perform operations on operands. They include arithmetic, relational, logical, assignment, etc. Examples:

- Arithmetic Operators: `+`, `-`, `*`, `/`, `%`.
- Relational Operators: `==`, `!=`, `<`, `>`, `<=`, `>=`.
- Logical Operators: `&&`, `||`, `!`.
- Assignment Operators: `=`, `+=`, `-=`, `*=`, `/=`, `%=`.

## Special Symbols

Special symbols are used for various purposes in C programming. They include:

- Braces: `{}`, used for defining blocks of code.
- Parentheses: `()`, used for function calls, expressions, etc.
- Semicolon: `;`, used to terminate statements.
- Comma: `,`, used to separate items in a list.

## Example

Here's a basic example demonstrating the use of these tokens in a C program:

```c
#include <stdio.h>

int main() {
    int num1 = 10, num2 = 20;
    int sum = num1 + num2;

    printf("The sum of %d and %d is %d\n", num1, num2, sum);

    return 0;
}
```

#

# Variables and Data Types in C Programming

In C programming, variables are used to store data that can be manipulated and referenced in the program. Each variable has a specific data type, which defines the type of data it can hold. Let's explore variables and data types in more detail:

## Variables

Variables are user-defined names that represent memory locations where data can be stored. They have the following characteristics:

- **Name**: A valid identifier that uniquely identifies the variable.
- **Data Type**: Defines the type of data that the variable can hold.
- **Value**: The actual data stored in the variable.
- **Memory Address**: The location in the computer's memory where the variable is stored.

## Data Types

Data types specify the type of data that can be stored in a variable. C programming language provides various data types, which can be broadly categorized into the following groups:

### Basic Data Types

- **int**: Represents integer values (whole numbers) such as `-10`, `0`, `42`.
- **char**: Represents individual characters enclosed in single quotes like `'A'`, `'b'`, `'5'`.
- **float**: Represents floating-point values (numbers with a decimal point) like `3.14`, `-0.5`.
- **double**: Represents double-precision floating-point values with higher precision than `float`.

### Derived Data Types

- **Arrays**: Collection of elements of the same data type accessed using an index.
- **Pointers**: Variables that store memory addresses. They point to another variable or data structure.
- **Structures**: User-defined data types that can hold multiple variables of different data types under one name.
- **Unions**: Similar to structures, but share memory space for multiple variables, allowing only one variable to hold a value at a time.

### Enumerated Data Types

- **enum**: User-defined data type used to assign names to integral constants, making the code more readable and maintainable.

### Void Data Type

- **void**: Represents the absence of a data type. It is often used as a return type for functions that do not return a value or to indicate no parameters in a function declaration.

## Example

Here's a basic example demonstrating the use of variables and data types in a C program:

```c
#include <stdio.h>

int main() {
    int age = 25;
    char grade = 'A';
    float height = 5.8;

    printf("Age: %d\n", age);
    printf("Grade: %c\n", grade);
    printf("Height: %.1f\n", height);

    return 0;
}
```
