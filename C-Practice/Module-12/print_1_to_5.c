#include <stdio.h>

void fun(int i)
{
    if (i == 6) return; // Base case
    printf("%d\n", i);
    fun(++i);
}

int main()
{
    fun(1);
    return 0;
}
