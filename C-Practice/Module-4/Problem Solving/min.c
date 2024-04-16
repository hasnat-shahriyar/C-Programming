#include <stdio.h>
#include <limits.h>

int main(){
    int N;
    scanf("%d", &N);
    int a, min = INT_MAX;
    for (int i = 1; i <= N; i++)
    {
        scanf("%d", &a);
        if (a < min)
        {
            min = a;
        }
        
    }
    printf("%d\n", min);
    return 0;
}
