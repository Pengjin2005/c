#include<stdio.h>

int main()
{
    int n;
    scanf("%d",&n);
    unsigned long long S = 0,a=1;
    for (int i = 1;i<=n;i++)
    {
        for (int j = 1;j<=i ;j++)
        {
            a *= j;
        }
        S += a;
        a = 1;
    }
    printf("%llu",S);
    return 0;
}
