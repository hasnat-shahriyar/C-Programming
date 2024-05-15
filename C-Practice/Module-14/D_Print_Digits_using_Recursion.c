#include <stdio.h>

void digit(int n)
{
    if (n == 0) return;
    int x = n % 10;
    digit(n / 10);
    printf("%d ", x);
}

int main()
{
    int test;
    scanf("%d", &test);
    for (int t = 0; t < test; t++)
    {
        int n;
        scanf("%d", &n);
        digit(n);
        printf("\n");
    }
    return 0;
}
