#include <stdio.h>

void fun(int *ar, int n) 
{
    for (int i = 0; i < n; i++) 
    {
        printf("%d ", ar[i]);
    }
    printf("\n");
    ar[2] = 300;
}

void name(char *str) {
    str[0] = 'H';
    str[3] = 'n';
}

int main() 
{
    int ar[5] = {10, 20, 30, 40, 50};
    fun(ar, 5);
    for (int i = 0; i < 5; i++) 
    {
        printf("%d ", ar[i]);
    }
    printf("\n");

    char str[] = "Gasmat";
    name(str);
    printf("%s\n", str);

    return 0;
}