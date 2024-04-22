#include<stdio.h>

int main()
{
    int a;
    printf("Enter a Number : ");
    scanf(" %d", &a);
    if(a % 2 == 0){
        printf("%d is Even Number");
    } else{
        printf("%d is Odd Number");
    }
    return 0;
}
// Problem Description
/*
You need to take one non-negative integer (0 or greater than 0) value as input and tell if it is even or odd.
______________
Sample Input:
10
3
_____________
Sample Output:
Even
Odd

*/