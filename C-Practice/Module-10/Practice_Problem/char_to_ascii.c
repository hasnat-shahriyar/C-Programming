#include <stdio.h>

int char_to_ascii(char c){
    return c;
}

int main()
{
    char input_character;
    scanf("%c", &input_character);

    int ascii_value = char_to_ascii(input_character);
    printf("%d\n", ascii_value);
    return 0;
}
