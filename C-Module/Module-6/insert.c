#include <stdio.h>

int main(){
    int ar[6] = {10, 20, 30, 40, 50};
    ar[5] = ar[4];
    ar[4] = ar[3];
    ar[3] = ar[2];
    ar[2] = 100;
    for (int i = 0; i < 6; i++)
    {
        printf("%d\t", ar[i]);
    }
    
    return 0;
}
