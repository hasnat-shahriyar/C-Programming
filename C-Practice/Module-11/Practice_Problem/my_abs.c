#include <stdio.h>
#include <stdlib.h>

int my_abs(int a)
{
    int output = abs(a);
    printf("%d", output);
}

int main()
{
    int n;
    scanf("%d", &n);
    my_abs(n);
    return 0;
}
