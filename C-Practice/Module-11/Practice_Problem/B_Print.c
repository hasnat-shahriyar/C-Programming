#include <stdio.h>

int prnt(int n)
{
    for (int i = 1; i <= n; i++)
    {
        printf("%d ", i);
    }
}
int main()
{
    int a;
    scanf("%d", &a);
    prnt(a);
    return 0;
}