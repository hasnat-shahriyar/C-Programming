#include <stdio.h>

void increment(int i)
{
    if (i == 6) return; // Base case
    printf("%d\n", i);
    increment(++i);
}

int main()
{
    increment(1);
    return 0;
}
