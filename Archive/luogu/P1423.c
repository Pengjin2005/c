#include<stdio.h>

int main()
{
    double s, d=2, sum=0;
    int k;
    scanf("%lf",&s);

    while (sum < s)
    {
        sum += d;
        d *= 0.98;
        k++;
    }

    printf("%d",k);
    return 0;
}