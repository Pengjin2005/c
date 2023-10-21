#include<stdio.h>

int main()
{
    int n;
    scanf("%d",&n);
    int a[15] = {0};
    int b[15] = {0};
    for (int i = 0; i <= 2*n-1; i++)
    {
        scanf("%d ",&b[i]);
    }
    return 0;
}