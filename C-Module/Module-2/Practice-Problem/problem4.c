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
// Problem Description
/*
You need to take one integer value as input and tell if the value is positive or negative or zero.
__________________
Sample Input :
10
-50
0
__________________
Sample Output :
positive
negative
zero

*/