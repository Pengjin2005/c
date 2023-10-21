#include<stdio.h>

int main()
{
    int m, n, p;
    scanf("%d %d %d",&m,&n,&p);
    int A[100][100] = {0}, B[100][100] = {0};
    int input;
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            scanf("%d",&input);
            A[i][j] = input;
        }
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < p; j++)
        {
            scanf("%d",&input);
            B[i][j] = input;
        }
    }

    int C[100][100];
    
}