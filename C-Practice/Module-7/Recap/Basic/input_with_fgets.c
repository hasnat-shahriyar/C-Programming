#include <stdio.h>
#include <string.h>

int main() {
    char a[100];
    // Input : Hasnat Shahriyar Nahin
    fgets(a, 23, stdin);
    a[22] = '\0';
    printf("Full Name = %s\n", a);
    printf("Size of = %d\n", sizeof(a));  
    printf("Length of = %d\n", strlen(a));
    return 0;
}
