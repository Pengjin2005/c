#include<stdio.h>

int main()
{
        int i, j, input;
    char matrix[2005][2005];
    int m, n;
    scanf("%d %d",&m,&n);
    char line[2005];
    scanf("%s",line);
        for (i = 0; i <= m+1; i++)
    {
        for (j = 0; j <= n+1; j++)
        {
            matrix[i][j] ='0';
        }
    }
    for (i = 1; i <= n; i++)
    {
        matrix[1][i] = (int) line[i-1];
    }
    
    for (i = 2; i <= m; i++)
    {
        for (j = 1; j <=n; j++)
        {
            if (matrix[i-1][j-1] == '1' && matrix[i-1][j] == '1' && matrix[i-1][j+1] == '1')
            {
                matrix[i][j] = '0';
            }
            else if (matrix[i-1][j-1] == '1' && matrix[i-1][j] == '0' && matrix[i-1][j+1] == '0')
            {
                matrix[i][j] = '0';
            }
            else if (matrix[i-1][j-1] == '0' && matrix[i-1][j] == '0' && matrix[i-1][j+1] == '0')
            {
                matrix[i][j] = '0';
            }
            else
            {
                matrix[i][j] = '1';
            }
        }
    }

    for (i = 2; i <= m; i++)
    {
        for (j = 1; j <=n; j++)
        {
            printf("%c",matrix[i][j]);
        }
        printf("\n");
    }
    return 0;
}