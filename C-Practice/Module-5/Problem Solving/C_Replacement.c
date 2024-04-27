#include <stdio.h>

int main(){
    int n;
    scanf("%d", &n);
    int a[n];
    
    for (int i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }

    int pos = 1;
    int neg = 2;
    for (int i = 0; i < n; i++) {
        if (a[i] > 0)
        {
            printf("%d ", pos);
        }
        else if(a[i] < 0){
            printf("%d ", neg);
        }
        else{
            printf("0 ");
        }
    }
    
    return 0;
}
