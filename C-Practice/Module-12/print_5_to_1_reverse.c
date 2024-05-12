#include <stdio.h>

void decrement_reverse_order(int i)
{
    if(i == 6) return;
    decrement_reverse_order(i+1);
    printf("%d\n", i);
}

int main()
{
    decrement_reverse_order(1);   
    return 0;
}
