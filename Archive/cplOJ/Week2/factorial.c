#include<stdio.h>

int main()
{
    int n;
    scanf("%d",&n);
    int multiply=1, sum = 0;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            multiply = (multiply%10007) * j; 
        }
        multiply %= 10007;
        sum += multiply;
        multiply = 1;
    }
    sum %= 10007;
    printf("%d",sum);
    return 0;
}