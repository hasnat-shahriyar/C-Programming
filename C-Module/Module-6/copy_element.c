#include <stdio.h>

int main(){
    int a[5] = {10, 20, 30, 40, 50};
    int b[2] = {60, 70};
    int ans[7];
    
    ans[0] = a[0];
    ans[1] = a[1];
    ans[2] = a[2];
    ans[3] = a[3];
    ans[4] = a[4];

    ans[5] = b[0];
    ans[6] = b[1];
    
    for (int i = 0; i < 7; i++)
    {
        printf("%d ", ans[i]);
    }
    
    return 0;
}
