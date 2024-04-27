#include <stdio.h>

int main(){
    int n;
    scanf("%d", &n);
    int a[n];

    for (int i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }

    int lowest = a[0];
    int lowest_index = 0;
    for (int i = 0; i < n; i++) {
        if (lowest > a[i])
        {
            lowest = a[i];
            lowest_index = i;
        }
        
    }
    printf("%d %d", lowest, lowest_index + 1);
    return 0;
}
