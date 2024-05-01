#include <stdio.h>

int main(){
    int n;
    scanf("%d", &n);
    char ar[10001];
    for (int i = 0; i < n; i++) 
    {
        scanf("%s", &ar);

        int s = 0, c = 0, d = 0;
        for (int j = 0; ar[j]; j++) {
            if (ar[j] >= 'a' && ar[j] <='z')
            {
                s++;
            }
            if (ar[j] >= 'A' && ar[j] <= 'Z')
            {
                c++;
            }
            if (ar[j] >= '0' && ar[j] <= '9')
            {
                d++;
            }
        }
        printf("%d %d %d\n", c, s, d);
    }
    return 0;
}
