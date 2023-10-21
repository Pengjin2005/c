#include<stdio.h>

int main()
{
    int n, a[101], inpu;
    scanf("%d",&n);
    for (int i = 1; i <= n; i++)
    {
        scanf("%d",&inpu);
        a[i] = inpu;
    }
    int max=a[1], min=a[1];
    for (int i = 1; i <= n; i++)
    {
        if (a[i] > max)
        {
            max = a[i];
        }
        if (a[i] < min)
        {
            min = a[i];
        }
    }
    printf("%d",max-min);
    return 0;
}