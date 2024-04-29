#include <stdio.h>

int main(){
    char str[6];

    str[0] = 'h';
    str[1] = 'e';
    str[2] = 'l';
    str[3] = 'l';
    str[4] = 'o';
    str[5] = '\0';

    printf("%s\n", str);
    // printf("%s\n", str[5]); // to print the null value

    // Or we can do this by not assigning the null value
    char b[4];

    b[0] = 'h';
    b[1] = 'e';
    b[2] = 'y';
    printf("%s", b);
    return 0;
}
