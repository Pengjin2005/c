#include<stdio.h>

int main()
{
    int n, k;
    int p=0,q=0;
    scanf("%d %d",&n,&k);
    double aveA, aveB;
    int sumA=0, sumB=0;
    int i = 1;
    while (i <= n)
    {
        if (i % k == 0)
        {
            sumA += i;
            p++;
        }
        else 
        {
        sumB += i;
        q++;
        }
        i++;
    }
    aveA = (double)sumA / p;
    aveB = (double)sumB / q;
    printf("%.1f %.1f",aveA,aveB);
    return 0;
}