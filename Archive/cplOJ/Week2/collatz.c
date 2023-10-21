#include<stdio.h>

int main()
{
    int n, k=0, max;
    scanf("%d",&n);
    max = n;
    while (n != 1)
    {
        if (n >= max)
        {
            max = n;
        }
        if (n % 2 == 0)
        {
            n = n/2;
            k++;
        }
        else if (n % 2 != 0)
        {
            n = 3*n + 1;
            k++;
        }
    }
    printf("%d %d",k,max);
    return 0;
}