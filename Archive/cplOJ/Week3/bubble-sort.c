#include<stdio.h>

int main()
{
    int T, n, a[50000], num , max;
    scanf("%d",&T);
    for (int i = 0; i < T; i++)
    {
        scanf("%d",&n);
        for (int i = 0; i < n; i++)
        {
            scanf("%d",&num);
            a[i] = num;
        }
        max = a[0];
        for (int i = 0; i < n; i++)
        {
            if (a[i] > max)
            {
                max = a[i];
            }
        }
        if (max == a[n-1])
        {
            printf("Yes\n");
        }
        else
        {
            printf("No\n");
        }
    }
    return 0;
}