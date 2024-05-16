#include <stdio.h>
#include <string.h>

int main()
{
    char a[1000];
    scanf("%s", &a);
    int i = 0, j = strlen(a)-1;
    int flag = 1;
    while (i < j)
    {
        if(a[i] != a[j])
        {
            flag = 0;
        }
        i++;
        j--;
    }
    if(flag == 0)
    {
        printf("NO\n");
    }
    else{
        printf("YES\n");
    }
    return 0;
}
