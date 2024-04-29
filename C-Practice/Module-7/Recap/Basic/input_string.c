#include <stdio.h>
#include <string.h>
int main(){
    
    char a[6]; // output : hello
    fgets(a,sizeof(a)/sizeof(char),stdin);
    printf("String Value = %s\n", a);
    printf("Size = %d\n", sizeof(a)/sizeof(char));
    printf("Length = %d\n", strlen(a));

    getchar();

    char b[5]; // output : hell
    fgets(b,sizeof(b)/sizeof(char),stdin);
    printf("String Value = %s\n", b);
    printf("Size = %d\n", sizeof(b)/sizeof(char));
    printf("Length = %d", strlen(b));
    return 0;
}
