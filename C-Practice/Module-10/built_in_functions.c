#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int main()
{
    // Ceiling Function
    double x;
    // Input : 3.5
    scanf("%lf", &x);
    int ceiling_ans = ceil(x);
    // Output : 4
    printf("Ceil : %d\n", ceiling_ans);

    // Floor Function
    int floor_ans = floor(x);
    // Output : 3
    printf("Floor %d\n", floor_ans);

    // Round Function
    int round_ans = round(x);
    // Output : 4
    printf("Round : %d\n", round_ans);

    // Square root Function
    int r;
    // Input : 25
    scanf("%d", &r);
    int square_root = sqrt(r);
    // Output : 5
    printf("Square Root : %d\n", square_root);

    // Power Function
    // with integer value
    int p, q;
    // Input : 3 3
    scanf("%d %d", &p, &q);
    int power_ans = pow(p, q);
    // Output : 27
    printf("%d\n", power_ans);

    // with floating value
    double s, t;
    // Input : 2.3 3.5
    scanf("%lf %lf", &s, &t);
    double double_power_ans = pow(s, t);
    // Output : 18.45
    printf("%0.2lf\n", double_power_ans);

    // Absolute Value Function
    int e;
    // Input : -1 or -3 or 5
    scanf("%d", &e);
    int absolute_ans = abs(e);
    // Output : 1 or 3 or 5
    printf("%d", absolute_ans);
    return 0;
}
