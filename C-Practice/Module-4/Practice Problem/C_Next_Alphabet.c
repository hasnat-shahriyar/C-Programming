#include <stdio.h>

int main(){
    char alpha;
    scanf("%c", &alpha);

    if (alpha >= 'a' && alpha < 'z'){
        int ans = alpha + 1;
        printf("%c", ans);
    } else if (alpha == 'z'){
        printf("a");
    }
    return 0;
}
