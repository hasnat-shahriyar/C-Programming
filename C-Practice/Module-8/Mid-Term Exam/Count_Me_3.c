#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    char ar[10001];

    for (int i = 0; i < n; i++) 
    {
        scanf("%s", ar);

        int small_letter = 0; 
        int capital_letter = 0;
        int digits = 0;

        for (int j = 0; ar[j] != '\0'; j++) 
        {
            if (ar[j] >= 'a' && ar[j] <= 'z') 
            {
                small_letter++;
            } 
            else if (ar[j] >= 'A' && ar[j] <= 'Z') 
            {
                capital_letter++;
            } 
            else if (ar[j] >= '0' && ar[j] <= '9') 
            {
                digits++;
            }
        }

        printf("%d %d %d\n", capital_letter, small_letter, digits);
    }

    return 0;
}
