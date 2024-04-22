#include <stdio.h>

int main(){
    char a[5] = {'N', 'a', 'h', 'i', 'n'};
    for (int i = 0; i < 5; i++)
    {
        printf("%c\n", a[i]);
    }
    printf("\n");
    char b[6] = "Hasnat";
    for (int i = 0; i < 6; i++)
    {
        printf("%c\n", b[i]);
    }
    
    char c[10] = "Shahriyar\0";
    printf("%s", c);
    return 0;
}
