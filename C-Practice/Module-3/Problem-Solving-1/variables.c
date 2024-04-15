#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int A;
    long int B;
    float C;
    char D;

    scanf("%d", &A);   
    scanf("%ld", &B);   
    scanf("%f", &C);   
    scanf(" %c", &D);

    printf("%d\n", A);   
    printf("%lld\n", B);   
    printf("%0.2f\n", C);   
    printf("%c\n", D);   
    return 0;
}
