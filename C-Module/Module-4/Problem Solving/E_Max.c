#include <stdio.h>

int main(){
    int N;
    scanf("%d", &N);
    int a, max = 0;
    for (int i = 1; i <= N; i++)
    {
        scanf("%d", &a);
        if (a > max)
        {
            max = a;
        }
        
    }
    printf("%d", max);
    return 0;
}
