#include<stdio.h>

int main()
{
    char mine[105][105];
    int i, j;
    for (i = 0; i < 105; i++)
    {
        for (j = 0; j < 105; j++)
        {
            mine[i][j] = 'o';
        }
    }
    int n;
    scanf("%d",&n);
    
    char line[105];
    for (i = 1; i <= n; i++)
    {
        scanf("%s",line);
        for (j = 1; j <= n; j++)
        {
            mine[i][j] = line[j-1];
        }
    } 

    int k, p, num=0;
    for (i = 1; i <= n; i++)
    {
        for (j = 1; j <= n; j++)
        {
            num = 0;
            for (k=j-1; k <= j+1; k++)
            {
                if (mine[i-1][k] == '*')
                {
                    num++;
                }
                if (mine[i][k] == '*' && k != j)
                {
                    num++;
                }
                if (mine[i+1][k] == '*')
                {
                    num++;
                }
                if (mine[i][j] != '*')
                {
                    mine[i][j] = num + '0';
                }
            }
        }
    }

    for (i=1; i <= n; i++)
    {
        for (j=1; j <= n; j++)
        {
            printf("%c",mine[i][j]);
        }
        printf("\n");
    }

    return 0;
}