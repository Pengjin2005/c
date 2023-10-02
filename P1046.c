#include<stdio.h>

int main()
{
    int alt[10], h, n = 0;
    for (int i = 0; i<10;i++)
    {
        scanf("%d",&alt[i]);
    }
    scanf("%d",&h);

    for (int i = 0; i<=10;i++)
    {
        if (alt[i] <= h + 30)
            n++;
    }
    printf("%d",n);
    return 0;
}