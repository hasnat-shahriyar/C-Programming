#include <stdio.h>

int main() {
    // Example
    int num = 10;
    float pi = 3.14159;
    char letter = 'A';
    char str[] = "Hello";
    int garbage_value; // This variable is uninitialized, so it contains garbage value

    printf("Integer: %d\n", num);
    printf("Float: %f\n", pi);
    printf("Character: %c\n", letter);
    printf("String: %s\n", str);
    printf("Garbage Value: %d\n", garbage_value); // Print the garbage value

    // Practice 1
    int studentScore = 200;
    printf("Student Score: %d\n", studentScore); // Print the value of studentScore

    int nahinScore = 300, mehediScore = 500;
    printf("Nahin's Score: %d \tMehedi's Score: %d\n", nahinScore, mehediScore); // Print values of nahin and mehedi

    // Practice 2
    float doshomikValue = 5.555;
    printf("Decimal Number : %f \n", doshomikValue); // Print doshomikValue
    printf("For Two Decimal Places: %.2f \n", doshomikValue); // Print doshomikValue with 2 decimal places

    // Practice 3
    char grade = 'A';
    printf("Grade: %c\n", grade);

    // Invalid : char can only store one value
    char invalidChar = 'AB'; // This is invalid
    printf("Invalid Character: %c\n", invalidChar); // This may also result in a compiler error

    // Storing a string
    char moreThanOne[] = "Nahin";
    printf("More than one character: %s\n", moreThanOne);
    char makeFunOfString[] = "Hasnat";
    printf("Getting the value at index 1 of the array : %c\n", makeFunOfString[2]);
    return 0;
}
