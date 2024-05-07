#include <stdio.h>

void fun(int *p)
{
    printf("Address of x passed from main to fun: %p\n", p);
    printf("Value of x passed from main to fun: %d\n", *p);
    // Dereference to change the value
    *p = 500;
    printf("Changed the value of x in fun using dereferencing: %d", *p);
}

int main()
{
    int x = 100;
    printf("Address of x in main: %p\n", &x);
    fun(&x);
    return 0;
}
