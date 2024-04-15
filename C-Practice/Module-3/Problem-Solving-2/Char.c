#include <stdio.h>

int main(){
    char A;
    scanf("%c", &A);
    if(A>=97 && A<= 122){
        // lowercase to UPPERCASE
        int conUpper = A - 32;
        printf("%c", conUpper);
    }else{
        // UPPERCASE to lowercase
        int conLower = A + 32;
        printf("%c", conLower);
    };
    return 0;
}

/*
This program takes an input character from the user and converts it from lowercase to uppercase if it's a lowercase letter,
and from uppercase to lowercase if it's an uppercase letter.

1. It includes the necessary header file <stdio.h> for standard input/output operations.

2. In the main function:
   - Declares a variable A of type char to store the input character.
   - Uses scanf to take input from the user and store it in A.

3. It checks if the input character A is a lowercase letter:
   - If A is between the ASCII values of lowercase letters (97 to 122), it converts it to uppercase by subtracting 32 from its ASCII value.
   - If A is not a lowercase letter, it assumes it's an uppercase letter and converts it to lowercase by adding 32 to its ASCII value.

4. Prints the converted character using printf.

5. Returns 0 to indicate successful execution.
*/
