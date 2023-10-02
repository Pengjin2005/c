#include<stdio.h>

int main()
{
    int n, re = 0;
    scanf("%d",&n);
    if (n % 100 == 0)
    {
        if (n % 400 == 0)
            re = 1;
    }
    else
    {
        if (n % 4 ==0)
        {
            re = 1;
        }
    }
    printf("%d",re);
    return 0;
}