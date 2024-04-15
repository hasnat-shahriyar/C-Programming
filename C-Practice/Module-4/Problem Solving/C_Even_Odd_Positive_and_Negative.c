#include <stdio.h>

int main(){
    int N;
    scanf("%d", &N);

    int a;
    int even = 0, odd = 0, negative = 0, positive = 0;
    for (int i = 1; i <= N; i = i+1){
        scanf("%d", &a);
        if (a % 2 == 0)
        {
            /* Even */
            // even = even + 1;
            // even += 1;
            even++;
        } else{
            // ODD
            odd++;
        }
        
        if (a > 0){
            // Positive
            positive++;
        } else if (a < 0){
            // Negative
            negative++;
        }
        
    }
    printf("Even: %d\nOdd: %d\nPositive: %d\nNegative: %d", even, odd, positive, negative);
    return 0;
}
