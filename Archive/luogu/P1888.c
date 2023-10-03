#include<stdio.h>

int main()
{
    int a, b, c;
    scanf("%d %d %d",&a ,&b, &c);
    int max, mid,min;
    max = (a>=b) ? (a >= c ? a : c) : (b>=c ? b : c);
    min = (a<=b) ? (a <= c ? a : c) : (b<=c ? b : c);
    if (max == a)
        mid = b>c ? b : c;
    else if (max == b)
        mid = a>c ? a : c;
    else if (max == c)
       mid = b>a ? b : a;
    for (int i = mid -1; i >= 1 ; i--)
    {
        if (max % i == 0 && min %i ==0)
        {
            max /= i;
            min /= i;
        }
    }
    printf("%d/%d",min,max);
    return 0;
}