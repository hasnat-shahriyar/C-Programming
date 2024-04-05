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
