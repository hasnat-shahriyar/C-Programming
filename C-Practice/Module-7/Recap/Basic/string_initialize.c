#include <stdio.h>

int main(){
    // It will show garbage value
    char name[6] = "Hasnat";
    printf("%s", name);
    // Since we used null termination hence it will not show garbage value
    char new_Name[6] = "Nahin\0";
    printf("\n%s", new_Name);
    return 0;
}
