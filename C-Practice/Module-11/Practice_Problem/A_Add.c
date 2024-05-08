#include <stdio.h>

int sum(int a, int b)
{
    return a + b;
}
int main()
{
    int x, y;
    scanf("%d %d", &x, &y);
    int final = sum(x, y);
    printf("%d", final);
    return 0;
}
