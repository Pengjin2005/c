#include<stdio.h>

int main()
{
    int x, property;
    int p1 = 0, p2 = 0, p3 = 0, p4 = 1;
    scanf("%d",&x);
    if (x > 4 && x <=12)
    {
        if (x % 2 == 0)
        p1 = 1;
    }
    if (x % 2 == 0  || (x > 4 && x <=12))
    {
        p2 = 1;
    }
    if (x % 2 != 0  && (x > 4 && x <=12))
    {
        p3 = 1;
    }
    if (x % 2 == 0)
    {
        if (x <= 4 || x > 12)
        p3 = 1;
    }
    if (x % 2 == 0  || (x > 4 && x <=12))
    {
        p4 = 0;
    }
    printf("%d %d %d %d",p1,p2,p3,p4);
    return 0;
}