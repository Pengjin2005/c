#include<stdio.h>

int main()
{
    int n = 0, k;
    double sum = 0.0;
    scanf("%d",&k);
    if (k == 1)
    {
        printf("%d", k);
    }
    while (sum <= k)
    {
        ++n;
        sum += (1.0/n);
    }
    printf("%d",n);
    return 0;
}  