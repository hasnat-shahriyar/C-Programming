#include <stdio.h>

int main() {
    int t;
    scanf("%d", &t); // Read the number of test cases

    while (t--) {
        long long m, a, b, c;
        scanf("%lld %lld %lld %lld", &m, &a, &b, &c); // Read the inputs

        long long calculated_product = a * b * c; // Calculate the product of the given three numbers

        if (calculated_product == 0) {
            if (m == 0) {
                printf("0\n"); // If all numbers are zero, the missing number is 0
            } else {
                printf("-1\n"); // If any of the given numbers is zero, but the product is non-zero, missing number can't be found
            }
        } else if (m % calculated_product == 0) {
            printf("%lld\n", m / calculated_product); // If the given product is divisible by the calculated product, print the missing number
        } else {
            printf("-1\n"); // Otherwise, print -1
        }
    }

    return 0;
}
