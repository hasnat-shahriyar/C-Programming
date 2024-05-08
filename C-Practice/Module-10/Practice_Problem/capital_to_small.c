#include <stdio.h>
#include <ctype.h>

char capital_to_small(char ch)
{
    char lowercase = tolower(ch);
    return lowercase;
}

int main()
{
    char uppercase;
    scanf("%c", &uppercase);

    char conversion = capital_to_small(uppercase);

    printf("%c", conversion);
    return 0;
}
