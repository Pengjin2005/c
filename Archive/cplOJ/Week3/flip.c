#include<stdio.h>

int main()
{
    int n;
    int bit[2001] = {0};
    scanf("%d",&n);

    int j;
    for (j = 1; j <= n; j++)
    {
        for (int i = 1; i <= n; i++)
        {
            if (i % j == 0)
            {
                bit[i] = (bit[i] == 0 ? 1 : 0);
            }
        }
    }

    for (j = 1; j <= n; j++)
    {
        if (bit[j] == 1)
        {
            printf("%d ",j);
        }
    }

    return 0;
}