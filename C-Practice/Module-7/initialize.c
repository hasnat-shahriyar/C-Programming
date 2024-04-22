#include <stdio.h>

int main() {
    char a[3] = "Hey";
    int sza = sizeof(a) / sizeof(char);
    printf("\n%d ", sza);
    printf("%s", a);

    char b[6] = "Hello";
    int szb = sizeof(b) / sizeof(char); 
    printf("\n%d ", szb); 
    printf("%s", b); 


    char c[] = "Bye\0";
    int szc = sizeof(c) / sizeof(char); 
    printf("\n%d ", szc);
    printf("%s", c); 

    
    char d[] = "SeeYa";
    int szd = sizeof(d) / sizeof(char); 
    printf("\n%d ", szd);
    printf("%s", d);

    return 0; 
}
