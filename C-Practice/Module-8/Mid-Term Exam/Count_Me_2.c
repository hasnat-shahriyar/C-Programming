#include <stdio.h>

int main() {
    char ar[100001];
    int cons = 0;
    scanf("%s", ar);

    for (int i = 0; ar[i] != '\0'; i++) 
    {
        if (ar[i] >= 'a' && ar[i] <= 'z') 
        {
            if (ar[i] != 'a' && ar[i] != 'e' && ar[i] != 'i' && ar[i] != 'o' && ar[i] != 'u') 
            {
                cons++;
            }
        }
    }

    printf("%d\n", cons);

    return 0;
}
