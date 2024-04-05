#include <stdio.h>

int main(int argc, char const *argv[])
{
    int a;
    printf("Enter a Number : ");
    scanf("%d", &a);

    if(a >= 1){
        printf("The number is positive", a);
    } else if (a < 0) {
        printf("The number is Negative", a);
    } else{
        printf("It is Zero");
    }
    return 0;
}
