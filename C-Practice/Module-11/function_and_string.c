#include <stdio.h>
#include <string.h>

void name_length(char *str) {
    printf("Length of the string '%s' is: %d\n", str, strlen(str));
}

int main() {
    char str[20] = "Hasnat";
    name_length(str);
    return 0;
}
