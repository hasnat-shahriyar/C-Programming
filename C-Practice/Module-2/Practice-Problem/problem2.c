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
    return 0;
}
