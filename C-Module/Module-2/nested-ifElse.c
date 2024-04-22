#include <stdio.h>

int main()
{
    int tk;
    printf("Koto Taka Ache? : ");
    scanf("%d", &tk);

    if (tk >= 50) {
        printf("Jilapi Khabo\n");
        if (tk >= 60)
        {
            printf("Jhalmuri Khabo\n");
        } else {
            printf("Chewing Gum chababo!\n");
        }
        
    } 
    else {
        printf("Kisui korbo na. taka save kore rakhbo\n");
    }

    return 0;
}
