#include <stdio.h>

int main()
{
    int t;
    scanf("%d", &t);

    long long int m, a, b, c;
    for (int i = 0; i < t; i++)
    {
        scanf("%lld %lld %lld %lld", &m, &a, &b, &c);

        long long int multiplied = a * b * c;

        if (multiplied == 0) 
        {
            if (m == 0) 
            {
                printf("0\n");
            } 
            else
            {
                printf("-1\n");
            }
        } 
        else if (m % multiplied == 0)
        {
            printf("%lld\n", m / multiplied); 
        } 
        else
        {
            printf("-1\n");
        }
    }

    return 0;
}
