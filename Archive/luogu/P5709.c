#include<stdio.h>
#include<math.h>

int main()
{
    int m, t, s;
    int n;
    scanf("%d %d %d", &m, &t, &s);
    if (t == 0)
    {
        printf("0");
    }
    else{
        if (s/t >= m)
    {
        printf("0");
    }
    else if (s % t == 0)
    {
        n = m - s/t;
        printf("%d",n);
    }  
    else 
    {
        n = m - s/t - 1;
        printf("%d",n);
    } 
    }
    return 0;                                                                                                 
}