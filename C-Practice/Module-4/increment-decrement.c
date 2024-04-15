#include <stdio.h>

int main(){
    int i = 10;
    // Post-increment: x gets the current value of i (10), then i is incremented by 1
    int x = i++;
    // Pre-increment: i is first incremented by 1, then y gets the new value of i (12)
    int y = ++i;
    printf("i : %d x : %d y : %d\n", i, x, y);
    
    // Post-decrement: a gets the current value of i (12), then i is decremented by 1
    int a = i--;
    // Pre-decrement: i is first decremented by 1, then b gets the new value of i (10)
    int b = --i;
    printf("a : %d b : %d", a, b);
    return 0;
}

/* Output will be

i : 12 x : 10 y : 12
a : 12 b : 10

*/