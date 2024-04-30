#include <stdio.h>
#include <string.h>

int main(){
    char a[100];
    fgets(a, sizeof(a), stdin);

    char b[100];
    fgets(b, sizeof(b), stdin);
    
    for (int i = 0; i < strlen(b); i++) {
        a[i] = b[i];
    }
    printf("%s", a);
    return 0;
}
