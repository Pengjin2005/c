#include<stdio.h>
#include<stdbool.h>

int main()
{
    char line[55] = {0};
    char map[55][55] = {0};
    int mark[55][55] = {0};
    int n, m, x0, y0;
    scanf("%d %d %d %d",&n,&m,&x0,&y0);
    int i, j;
    for (j = 1; j <= n ; j++)
    {
        scanf("%s",line);
        for (i = 1; i <= m; i++)
        {
            map[j][i] = line[i-1];
        }
    }

    int x=x0, y=y0;
    int traceX[5000];
    int traceY[5000];
    int ans = 1,  posible=4;
    while (posible != 0)
    {
        traceX[ans] = x;
        traceY[ans] = y;
        mark[x][y] = 1;
        posible = 0;
        if (map[x+1][y] == '#' && mark[x+1][y] != 1)
        {
            posible++;
            x = x + 1;
            y = y;
            ans++;
            mark[x][y] = 1;
            traceX[ans] = x;
            traceY[ans] = y;
        }
        else if (map[x][y+1] == '#' && mark[x][y+1] != 1)
        {
            posible++;
            x = x ;
            y = y + 1;
            ans++;
            mark[x][y] = 1;
            traceX[ans] = x;
            traceY[ans] = y;
        }
        else if (map[x-1][y] == '#' && mark[x-1][y] != 1)
        {
            posible++;
            x = x - 1;
            y = y;
            ans++;
            mark[x][y] = 1;
            traceX[ans] = x;
            traceY[ans] = y;
        }
        else if (map[x][y-1] == '#' && mark[x][y-1] != 1)
        {
            posible++;
            x = x ;
            y = y - 1;
            ans++;
            mark[x][y] = 1;
            traceX[ans] = x;
            traceY[ans] = y;
        }
    }
    printf("%d\n",ans);
    for (i = 1; i <= ans; i++)
    {
        printf("%d %d\n",traceX[i],traceY[i]);
    }
    return 0;
}