#include<stdio.h>

int main()
{
    int l, m, sum = 0;
    scanf("%d %d",&l,&m);
    int a[m];
    for (int i = 1; i<= m; i++)
    {
        a[i] =  1;
    }
    int u, v;
    while(m--)
    {
        int i = 1;
        scanf("%d %d",&u,&v);
        if(u <= i <= v);
        a[i] = 0;
    }
    for (int i = 1; i<= m; i++)
    {
        sum += a[i];
    }
    printf("%d",sum);
    return 0;
}