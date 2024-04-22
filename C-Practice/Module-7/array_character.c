#include <stdio.h>

int main(){
    int n;
    printf("Enter the size of the array: ");
    scanf("%d", &n);
    char a[n];
    
    printf("Enter %d characters: ", n);
    for (int i = 0; i < n; i++) {
        scanf(" %c", &a[i]);
    }

    printf("The characters entered are:\n");
    for (int i = 0; i < n; i++) {
        printf("%c %d\n", a[i], i);
    }
    
    
    return 0;
}
