#include <stdio.h>

int add(void){
    int a, b;
    a = 5;
    b = 17;
    int sum = a + b;
    return sum;
}

int main()
{
    int sum = add();
    printf("%d", sum);
    return 0;
}
