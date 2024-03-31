#include <stdio.h>

int main() {
    int num = 10;
    float pi = 3.14159;
    char letter = 'A';
    char str[] = "Hello";
    int garbage_value;

    printf("Integer: %d\n", num);
    printf("Float: %f\n", pi);
    printf("Character: %c\n", letter);
    printf("String: %s\n", str);
    printf("Garbage Value: %d"); // This will print a garbage value

    return 0;
}
