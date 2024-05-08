#include <stdio.h>
#include <ctype.h>

char small_to_capital(char ch){
    char capital_character = toupper(ch);
    return capital_character;
}
int main()
{
    char small_character;
    scanf("%c", &small_character);

    char uppercase = small_to_capital(small_character); 

    printf("%c", uppercase);
    return 0;
}
