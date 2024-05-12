#include <stdio.h>

void reverse(int i)
{
    if (i == 0) return;
    printf("%d\n", i);
    reverse(--i);
}

int main()
{
    reverse(5);
    return 0;
}
