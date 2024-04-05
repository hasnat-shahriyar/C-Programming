#include <stdio.h>

int main()
{
    int i;
    for (i = 1; i <= 10; i++){
        printf("Value of i is : %d\n", i);
    }
    int sum=0;
    int sum1=0;
    int a;
    int n;

    for (a = 0; a <= 5; a=a+1){
        sum+=a;
    }
    printf("%d\n", sum);

    printf("Enter the value of n : ");
    scanf("%d", &n);
    for (a = 0; a <= n; a=a+1){
        sum1+=a;
    }
    printf("The total answer is : %d",sum1);
    return 0;
}

/*
If n is 7, the output will be "The total answer is: 28" (0 + 1 + 2 + 3 + 4 + 5 + 6 + 7 = 28).
*/