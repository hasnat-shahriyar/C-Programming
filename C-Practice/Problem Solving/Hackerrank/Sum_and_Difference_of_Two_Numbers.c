#include <stdio.h>

int main(){
    int n, m;
    scanf("%d %d", &n, &m);

    float g, h;
    scanf("%f %f", &g, &h);

    int sumInt = n + m;
    int sumIntDif = n - m;
    printf("%d %d\n", sumInt, sumIntDif);

    float sumFloat = g + h;
    float sumFloatDif = g - h;
    printf("%.1f %.1f\n", sumFloat, sumFloatDif);
    return 0;
}
