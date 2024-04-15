#include <stdio.h>

int main(){
    int i = 10;
    int x = i++;

    int a = 10;
    int y = ++a;
    printf("Increment\n");
    printf("x : %d i : %d y : %d\n\n", x, i, y);

    int c = 10;
    int p = c--;

    int d = 10;
    int q = --d;
    printf("Decrement\n");
    printf("p : %d c : %d q : %d", p, c, q);
    return 0;
}
