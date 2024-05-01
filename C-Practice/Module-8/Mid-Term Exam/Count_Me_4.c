#include <stdio.h>
#include <string.h>

int main() {
    char ar[10001];
    scanf("%s", ar);

    int count[100] = {0};
    for (int i = 0; i < strlen(ar); i++) 
    {
        if (ar[i] >= 'a' && ar[i] <= 'z') 
        {
            int character = ar[i] - 'a';
            count[character]++;
        }
    }
    
    for (int i = 0; i < 100; i++) 
    {
        if (count[i] > 0) 
        {
            printf("%c - %d\n", 'a' + i, count[i]);
        }
    }

    return 0;
}
