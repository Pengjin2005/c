#include<stdio.h>

int main()
{
    int n, x, k = 0;
    scanf ("%d %d",&n,&x);

    for (int i = 1; i <= n; i++)
    {
        int temp = i;
        while (temp > 0)
        {
            int digit = temp %10;
            if (digit == x)
                k++;
            temp /= 10;
        }
    }

    printf("%d",k);
    return 0;
}