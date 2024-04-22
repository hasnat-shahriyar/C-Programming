#include <stdio.h>

int main()
{
    int money;
    printf("How much money do you have? : ");
    scanf("%d", &money);

    if (money >= 10000){
        printf("Gucci Bag", money);
        if (money > 20000){
            printf(" Gucci Belt", money);
        }
    } else if (money >= 5000){
        printf("Levis Bag", money);
    } else {
        printf("Something", money);
    }
    return 0;
}
// Problem Description
/*
Suppose your friend has told you that she will buy a Gucci Bag if she has 10 thousand taka or more. Otherwise if she has 5 thousand taka or more, she will buy a Levis Bag. Otherwise she will buy Something from New Market. She also told you that, if she could buy the Gucci bag and she has more than 20 thousand taka she will also buy a Gucci Belt.

Now, if you know the amount of money she has, can you tell which item/items she will buy?
See the sample input and output for more clarification.

___________________
Sample Input :
20000

6500

200

25400
___________________
Sample Output :
Gucci Bag

Levis Bag

Something

Gucci Bag
Gucci Belt

*/