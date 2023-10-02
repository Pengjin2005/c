#include<stdio.h>

int main()
{
    int a,b;
    int maxTime = 0, maxIndex = 0;
    for (int i = 0; i <7; ++i)
    {
        scanf("%d %d",&a,&b);
        if (a+b > maxTime && a+b >8)
        {
            maxIndex = i +1;
            maxTime =a +b;
        }
    }
    printf("%d",maxIndex);
    return 0;
}