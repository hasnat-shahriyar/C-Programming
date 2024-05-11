#include <stdio.h>

int max_of_four(int a, int b, int c, int d)
{
    int temp = a;
    if(b > temp)
    {
        temp = b;
    }
    if (c > temp)
    {
        temp = c;
    }
    if (d > temp)
    {
        temp = d;
    }
    return temp;
}
int main()
{
    int a;
    scanf("%d", &a);
    int b;
    scanf("%d", &b);
    int c;
    scanf("%d", &c);
    int d;
    scanf("%d", &d);
    
    int ans = max_of_four(a, b, c, d);
    printf("%d", ans);
    return 0;
}
