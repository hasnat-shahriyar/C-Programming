#include <stdio.h>

void shad(){
    printf("and Shad. ");
}

void mehedi(){
    printf("Mehedi, ");
}

void hello(){
    printf("I have some friends named : ");
    mehedi();
    printf("Rakib, ");
    shad();
}

int main()
{
    printf("Hey, I am Nahin\n");
    hello();
    printf("With whom I am closed the most\n");
    return 0;
}
