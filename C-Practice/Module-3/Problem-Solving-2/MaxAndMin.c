#include <stdio.h>

int main() {
    int A, B, C;
    scanf("%d %d %d", &A, &B, &C);

    // Minimum Value
    if (A <= B && A <= C) {
        printf("%d ", A);
    } else if (B <= A && B <= C) {
        printf("%d ", B);
    } else {
        printf("%d ", C);
    }
    // Maximum Value
    if (A >= B && A >= C) {
        printf("%d\n", A);
    } else if (B >= A && B >= C) {
        printf("%d\n", B);
    } else {
        printf("%d\n", C);
    }

    return 0;
}
