#include <stdio.h>

int main() 
{
    int t, n;

    char final[100001];

    scanf("%d", &t);
    
    while (t--) 
    {
        scanf("%d", &n);

        scanf("%s", final);

        int tiger = 0;
        int pathan = 0;


        for (int i = 0; i < n; i++) 
        {
            if (final[i] == 'T') 
            {
                tiger++;
            } 
            else if (final[i] == 'P') 
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