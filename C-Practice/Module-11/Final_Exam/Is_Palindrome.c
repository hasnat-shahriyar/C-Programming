#include <stdio.h>
#include <string.h>

int is_palindrome(char *str) 
{
    int l = strlen(str);
    int start = 0;
    int end = l - 1;

    while (start < end) 
    {
        if (str[start] != str[end]) 
        {
            return 0;
        }
        start++;
        end--;
    }
    return 1;
}

int main() 
{
    char str[1001];
    scanf("%s", str);

    int pal = is_palindrome(str);

    if (pal == 0) 
    {
        printf("Not Palindrome\n");
    } else 
    {
        printf("Palindrome\n");
    }

    return 0;
}
