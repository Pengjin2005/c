#include<stdio.h>

int main()
{
    int a, b, c, max, mid, min;
    scanf("%d %d %d",&a,&b,&c);
    max = a >= b ? (a >= c ? a : c) : (b >= c ? b : c);
    min = a <= b ? (a <= c ? a : c) : (b <= c ? b : c);
    if (max != c)
    {
        mid = a >= b ? (b >= c ? b : c) : (a >= c ? a : c);
    }
    else
    {
        mid = a >=b ? a : b;
    }
    printf("%d %d %d",min,mid,max);
    return 0;
}