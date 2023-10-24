#include<stdio.h>

int main()
{
    int m, n, p;
    scanf("%d %d %d",&m,&n,&p);
    int A[100][100] = {0}, B[100][100] = {0};
    int input;

    int i, j;
    for (i = 0; i < m; i++)
    {
        for (j = 0; j < n; j++)
        {
            scanf("%d",&input);
            A[i][j] = input;
        }
    }
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < p; j++)
        {
            scanf("%d",&input);
            B[i][j] = input;
        }
    }

    int C[100][100];
    int result=0, k;
    int a, b;
    for (i = 0; i < m; i++)
    {
        for (j = 0; j < p; j++)
        {
            result=0;
            for (k = 0; k < n; k++)
            {
                result += A[i][k] * B[k][j];
                C[i][j] = result;
            }
        }
    }

    for (i = 0; i < m; i++)
    {
        for (j = 0; j < p; j++)
        {
            printf("%d ",C[i][j]);
        }   
        printf("\n");
    }
    return 0;
}