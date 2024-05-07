#include <stdio.h>

void fun (int ar[], int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("%d ", ar[i]);
    }
}
void ptr(int *ar, int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("%d ", ar[i]);
    }
}
int main()
{
    int ar[5] = {10, 20, 30, 40, 50};
    int size_array = sizeof(ar);
    int size_array2 = sizeof(ar)/sizeof(int);
    printf("Array ar contains %d elements\n", size_array);
    printf("Number of elements in array ar: %d\n", size_array2);

    fun(ar, 5);
    printf("\n");
    ptr(ar, 5);
    return 0;
}
