#include <stdio.h>

int main()
{
    int a;
    int b;
    int add;
    int min;
    int multiply;
    int division;

    printf("Input a : ");
    scanf("%d", &a);

    printf("Input b : ");
    scanf("%d", &b);

    add = a+b;
    min = a-b;
    multiply = a*b;
    division = a/b;

    // Addition
    printf("Your Addition Result : %d + %d = %d\n", a, b, add);
    // Subtraction
    printf("Your Subtraction Result : %d - %d = %d\n", a, b, min);
    // Multiplication
    printf("Your Multiplication Result : %d * %d = %d\n", a, b, multiply);
    // Division
    printf("Your Division Result : %d / %d = %d\n", a, b, division);
    // Just the output without mentioning the values
    printf("Your Division Result : %d\n", division);
    return 0;
}

// Problem Description
/*
You need to take two integer values as input and show the summation, subtraction, multiplication and division in the given format below.

For example:
Inputs are 5 and 2
Then you’ll give output as:
5 + 2 = 7
5 - 2 = 3
5 * 2 = 10
5 / 2 = 2.50

*/