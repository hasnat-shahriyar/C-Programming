#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    int ar[n];
    for (int i = 0; i < n; i++) {
        scanf("%d", &ar[i]);
    }
    int count[7] = {0};
    for (int i = 0; i < n; i++) {
        if (ar[i] == 0) {
            count[0]++;
        }
        if (ar[i] == 1) {
            count[1]++;
        }
        if (ar[i] == 2) {
            count[2]++;
        }        
        if (ar[i] == 3) {
            count[3]++;
        }        
    }
    printf("Zero = %d\n", count[0]);
    printf("One = %d\n", count[1]);
    printf("Two = %d\n", count[2]);
    printf("Three = %d\n", count[3]);
    return 0;
}
