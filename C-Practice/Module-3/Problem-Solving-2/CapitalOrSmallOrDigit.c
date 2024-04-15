#include <stdio.h>

int main(){
    char X;
    scanf("%c", &X);
    if (X >= '0' && X<= '9'){
        printf("IS DIGIT\n");
    } else{
        printf("ALPHA\n");
        if (X >= 'a' && X <='z'){
            printf("IS SMALL\n");
        } else{
            printf("IS CAPITAL");
        };
    };
    return 0;
}

/*
This program takes an input character from the user and checks whether it's a digit or an alphabet. If it's an alphabet, it further distinguishes whether it's a lowercase or an uppercase letter.

1. It includes the necessary header file <stdio.h> for standard input/output operations.

2. In the main function:
   - Declares a variable X of type char to store the input character.
   - Uses scanf to take input from the user and store it in X.

3. It checks if the input character X is a digit:
   - If X is between the characters '0' and '9', it prints "IS DIGIT".
    - [In C, characters are represented as integers according to their ASCII values. The characters '0' to '9' have consecutive ASCII values from 48 to 57, respectively. 

    So, when we say "If X is between the characters '0' and '9'", we mean if the ASCII value of character `X` falls within the range of ASCII values corresponding to '0' and '9', inclusive.

    The condition `X >= '0' && X <= '9'` checks exactly that. If `X` is a digit (i.e., its ASCII value is between the ASCII values of '0' and '9'), then the condition evaluates to true, and the program prints "IS DIGIT". Otherwise, it proceeds to the next condition to determine whether `X` is an alphabet.]

4. If X is not a digit, it prints "ALPHA" to indicate it's an alphabet:
   - It further checks if X is a lowercase letter by verifying if it falls within the range of 'a' to 'z'.
     - If it is, it prints "IS SMALL".
   - If X is not a lowercase letter, it assumes it's an uppercase letter and prints "IS CAPITAL".
*/
