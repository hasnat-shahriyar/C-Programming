#include <stdio.h>

int main() {
    // Practice 1
    int inputNumber;
    printf("Enter a Number: ");
    scanf("%d", &inputNumber);
    printf("Your Input Number is: %d\n", inputNumber);

    // Practice 2
    char singleCharacter;
    printf("Enter a character: ");
    scanf(" %c", &singleCharacter); // Added space before %c to consume newline
    printf("Your Character is: %c\n", singleCharacter);

    // Practice 3
    char name[100]; // Assuming maximum name length of 99 characters
    printf("Enter Your Name: ");
    scanf("%s", name);
    printf("Your Name is: %s\n", name);

    return 0;
}
