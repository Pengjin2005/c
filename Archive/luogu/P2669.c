#include<stdio.h>

int main()
{
    int k;
    scanf("%d",&k);
    int sum = 0, n = 0;
    int coins = 0;
    while (sum + n <= k)
    {
        sum += n;
        n++;
    }
    int i;
    for (i = 1; i < n; i++ )
    {
        coins += i*i;
    }
    coins += (k - sum) * i;
    printf("%d",coins);
    return 0;
}