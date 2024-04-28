#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);

    int a[n];
    for (int i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }

    int two = 0;
    int three = 0;

    for (int i = 0; i < n; i++) {
        if (a[i] % 2 == 0 && a[i] % 3 != 0)
        {
            two++;
        }
        if (a[i] % 3 == 0 && a[i] % 2 != 0)
        {
            three++;
        }
        if (a[i] % 2 == 0 && a[i] % 3 == 0)
        {
            two++;
        }
    }
    printf("%d %d", two, three);
      
    return 0;
}
