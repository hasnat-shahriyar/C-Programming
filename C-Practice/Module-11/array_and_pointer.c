#include <stdio.h>

int main()
{
    int ar[5] = {10, 20, 30, 40, 50};
    
    printf("Address of index 0: %p\n", &ar[0]);
    printf("Address of index 0: %p\n", ar);

    printf("Value of index 0: %d\n", ar[0]);
    printf("Value of index 0: %d\n", *ar);

    printf("Address of index 1: %p\n", (ar + 1));
    printf("Value of index 1: %d\n", *(ar + 1));
    printf("Value of index 2: %d\n", ar[2]);

    return 0;
}
