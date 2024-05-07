#include <stdio.h>

int main()
{
    int x = 10;
    printf("Address of x : %p\n", &x);
    int *ptr = &x;
    printf("Value of ptr : %p\n", ptr);
    printf("Address of ptr : %p\n", &ptr);
    printf("Memory size of ptr : %d\n", sizeof(ptr));

    x = 100;
    printf("Value of x : %d\n", x);
    printf("Value of x : %d\n", *ptr);
    *ptr = 300;
    printf("Value of x changed with *ptr : %d\n", x);
    printf("Value of x changed with *ptr : %d\n", *ptr);
    int *ptr2 = ptr;
    *ptr2 = 500;
    printf("Value of x changed by changing the value of *ptr with *ptr2 : %d\n", x);
    printf("Value of x changed by changing the value of *ptr with *ptr2 : %d\n", *ptr);
    printf("Value of x changed by changing the value of *ptr with *ptr2 : %d\n", *ptr2);
    return 0;
}
