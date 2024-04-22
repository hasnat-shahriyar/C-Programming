#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    int A[n];

    for (int i = 0; i < n; i++) {
        scanf("%d", &A[i]);
    } 

    long long int sum = 0;

    for (int i = 0; i < n; i++) {
        sum = sum + A[i];
    }

    if (sum > 0)
    {
        printf("%lld\n", sum);
    } else{
        printf("%lld\n", -sum);
    }
    

    
    return 0;
}