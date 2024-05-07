#include <stdio.h>

int x = 5;

int add(){
    int y;
    y = 10;
    int sum = x + y;
    printf("Addition : %d\n", sum);
}

int multiply(){
    int y = 5;
    int sum = x * y;
    printf("Multiply Function : %d\n", sum);
}
int main()
{
    multiply();
    printf("Global Variable x : %d\n", x);
    add();
    return 0;
}
