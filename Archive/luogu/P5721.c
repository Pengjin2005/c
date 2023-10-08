#include<stdio.h>

int main()
{
    int n, k = 1;;
    scanf("%d",&n);
    for (int i = 1; i<=n;i++)
    {
        for (int j = n + 1 - i ;j>=1;j--)
        {
                printf("%.2d",k);
                k++;
        }
        printf("\n");
    }
    return 0;
}