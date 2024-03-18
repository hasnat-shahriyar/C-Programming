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
