#include<stdio.h>

int main()
{
    int n, a[15]={0};
    int m = 0;
    scanf("%d",&n);
    for (int i = 0; i < n; i++)
    {
        int k;
        scanf("%d",&k);
        a[i] = k;
    }
    int count[15] = {0};
    int     index=0;
    int i = 0;
    for (int j = 0; j <= n; j++)
    {
        for (int i = index; i < n; i++)
        {
            if (a[i] + 1 == a[i+1] && a[i] == a[i-1] + 1)
            {
                count[j]++;
                index = i;
            }
            if (a[i] <= a[i+1])
            {
                break;
            }
        }
    }
    
    int max= count[0];
    for (int j = 0; j <= n; j++)
    {
        if (max > count[j])
        {
            max = count[j];
        }
    }
    printf("%d",max+2);
    return 0;
}