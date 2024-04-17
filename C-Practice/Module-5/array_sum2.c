#include <stdio.h>

int main(){
    int n;
    scanf("%d", &n);
    int ar[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &ar[i]);
    }
    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        sum = sum + ar[i];
        printf("%d + %d = %d\t", ar[i], sum - ar[i], sum);
    }
    printf("\nTotal array sum : %d", sum);
    return 0;
}
