#include<stdio.h>

int main()
{
    int n;;
    scanf("%d",&n);
    int price[3], quantity[3], sum[3];
    for (int i = 0; i < 3; i++)
    {
        scanf("%d %d",&quantity[i], &price[i]);
        if (n % quantity[i] == 0)
        {
             sum[i] = (n/quantity[i]) * price[i];
        }
        else 
        {
             sum[i] = (n/quantity[i] + 1) * price[i];
        }
    }
    int min = (sum[0] > sum[1]) ? (sum[1] > sum[2] ? sum[2] : sum[1]) : (sum[0] > sum[2] ?sum[2] : sum[0]);
    printf("%d",min);
    return 0;
}