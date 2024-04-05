#include <stdio.h>

int main()
{
    int i;
    for (i=1; i <= 10; i+=1){
        if (i % 2 == 0){
            printf("%d is Even\n", i);
        } else{
            printf("%d is Odd\n",i);
        }
    }
    return 0;
}
