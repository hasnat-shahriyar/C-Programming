#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    int ar[n];
    for (int i = 0; i < n; i++) {
        scanf("%d", &ar[i]);
    }
    int zero = 0, one = 0, two = 0;
    for (int i = 0; i < n; i++) {
        if (ar[i] == 0) {
            zero++;
        }
        if (ar[i] == 1) {
            one++;
        }
        if (ar[i] == 2) {
            two++;
        }        
    }
    printf("Zero = %d\n", zero);
    printf("One = %d\n", one);
    printf("Two = %d\n", two);
    return 0;
}
