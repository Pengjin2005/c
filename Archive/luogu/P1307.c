#include<stdio.h>

int main()
{
    int N, reverse=0, o;
    scanf("%d",&N);
    if (N < 0)
    {
        N *= -1;
        o = -1;
    }
    else
    {
        o = 1;
    }
    if (N == 0)
    {
        N = 0;
    }
    else
    {
        while (N % 10 == 0)
        {
            N /= 10;
        }
    }

    while(N != 0)
    {
        reverse = reverse*10 + N%10;
        N /= 10;
    }
    reverse *= o;
    printf("%d",reverse);
    return 0;
}