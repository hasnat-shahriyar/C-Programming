#include <stdio.h>

void fun(int x){
    printf("Address of x inside fun function : %p\n", &x);
}
int main()
{
    int x = 10;
    printf("Address of x inside main function : %p\n", &x);
    fun(x);
    return 0;
}
