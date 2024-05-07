#include <stdio.h>

void add(void){
    int a, b;
    scanf("%d %d", &a, &b);
    int sum = a + b;
    printf("Sum of %d + %d = %d\n", a, b, sum);
}

int main()
{
    add();
    add();
    return 0;
}
