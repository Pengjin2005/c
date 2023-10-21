#include<stdio.h>

int main()
{
    int n;
    char string[2001] = {0};
    scanf("%d",&n);
    scanf("%s",string);
    int i;
    for (i = 0; i <= n-1; i++)
    {
        if (string[i] == '?')
        {
            string[i] =  string[n-1-i];
        }
    }
    printf("%s",string);
    return 0;
}