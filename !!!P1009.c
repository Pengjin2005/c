#include<stdio.h>

int main()
{
    int A[1000] = {0}, B[1000] = {0};
    A[0] = B[0] = 1;
    int n;
    scanf("%d",&n);
    int i, j;
    for ( i = 2; i <= n; i++ )
    {
        for ( j = 0; j <= 100; j++)
        {
            A[j] *= i;
        }
        for ( j = 0; j <= 100; j++)
        {
            if (A[j] > 9)
            {
                A[j+1] +=A[j] / 10;
                A[j] = A[j] % 10;
            }
        }

        for ( j = 0; j <= 100; j++)
        {
            B[j] += A[j];
            if (B[j] > 9)
            {
                B[j+1] +=B[j] / 10;
                B[j] = B[j] % 10;
            }
        }
    }
    int k = 100;
    while (B[k] == 0)
        k--;
    for ( i = k; i >=0; i--)
        printf("%d",B[i]);
    return 0;
}
