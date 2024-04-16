#include <stdio.h>

int main(){
    int X;
    while (scanf("%d", &X) != EOF)
    {
        if(X != 1999){
            printf("Wrong\n");
        } else{
            printf("Correct\n");
            break;
        }
    }
    return 0;
}
