#include <stdio.h>

int main() {
    int N;
    scanf("%d", &N);
    int num;
    int sum_pos = 0, sum_neg = 0;
    
    for (int i = 0; i < N; i++) {
        scanf("%d", &num);
        if (num >= 0) {
            sum_pos = sum_pos + num;
        } else{
            sum_neg = sum_neg + num;
        }
    }
    printf("%d %d", sum_pos, sum_neg);
    
    
    return 0;
}
