#include <stdio.h>
#include <string.h>

int main(){
    char a[200], b[100];
    scanf("%s %s", a, b);

    int k = strlen(a);
    strcat(a, b);
    printf("%s", a);
    // printf("%s %s", a, b);
    return 0;
}
