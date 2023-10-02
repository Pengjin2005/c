#include<stdio.h>

int main()
{
    int y, m , d;
    scanf("%d %d",&y,&m);
    if (m == 1 || m ==3  || m == 5 || m == 7 || m == 8 || m == 10 || m == 12)
    {
        d= 31;
    }
    else if (m == 2)
    {
        if (y % 100 != 0 && y %4 == 0)
        {
            d = 29;
        }
        else if (y % 400 == 0)
        {
            d = 29;
        }
        else
            d = 28;
    }
    else
        d = 30;
    printf("%d",d);
    return 0;
}