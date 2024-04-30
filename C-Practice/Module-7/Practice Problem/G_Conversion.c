#include <stdio.h>
#include <string.h>

int main(){
    char ar[100001];
    fgets(ar, 100001, stdin);
    
    for (int i = 0; ar[i] != '\0'; i++) {
        if (ar[i] == ',') 
        {
            ar[i] = ' ';
        }
        else if (islower(ar[i]))
        {
            ar[i] = toupper(ar[i]);
        }
        else if (isupper(ar[i]))
        {
            ar[i] = tolower(ar[i]);
        };
    }
    printf("%s", ar);
    return 0;
}
