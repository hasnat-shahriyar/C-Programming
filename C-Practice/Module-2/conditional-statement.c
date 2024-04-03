#include <stdio.h>

int main()
{
    int tk;
    printf("Koto Taka Ache? : ");
    scanf("%d", &tk);
    if(tk >= 100){
        printf("Burger Khabo");
    } else if (tk >= 20){
        printf("Chips Khabo!");
    } else {
        printf("khaboi na kisu");
    }
    return 0;
}
