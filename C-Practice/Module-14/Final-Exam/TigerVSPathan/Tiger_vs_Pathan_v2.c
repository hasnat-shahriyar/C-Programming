#include <stdio.h>

int main() 
{
    int t, n;
    char final[100001];

    scanf("%d", &t);

    for (int i = 0; i < t; i++) 
    {
        scanf("%d", &n);

        scanf("%s", final);

        int tiger = 0;
        int pathan = 0;

        for (int j = 0; j < n; j++) 
        {
            if (final[j] == 'T') 
            {
                tiger++;
            } 
            else if (final[j] == 'P') 
            {
                pathan++;
            }
        }

        if (tiger > pathan) 
        {
            printf("Tiger\n");
        } 
        else if (pathan > tiger) 
        {
            printf("Pathaan\n");
        } 
        else 
        {
            printf("Draw\n");
        }
    }

    return 0;
}
