#include <stdio.h>

int main(){
    int sum = 0;
    int ar[5] = {10, 20, 30, 40, 50};
    for (int i = 0; i < 5; i++)
    {
        sum = sum+ar[i];
        printf("%d\t", sum);
    }
    
    return 0;
}
