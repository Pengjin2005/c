#include <stdio.h>

int main()
{
    int xa, ya, xb, yb, xc, yc;
    scanf("%d%d%d%d%d%d", &xa, &ya, &xb, &yb, &xc, &yc);
    int path[2002], k = 0;
    int x = xa, y = ya;
    while (x != xb || y != yb)
    {
        while (x < xb)
        {
            if (x + 1 != xc)
            {
                x++;
                path[k] = 'R';
                k++;
            }
            else if (x + 1 == xc && )
            {
                if (y <= yc )
                {
                    y++;
                    path[k] = 'U';
                    k++;
                    x++;
                    path[k] = 'R';
                    k++;
                }
                else if (y > yc)
                {
                    y--;
                    path[k] = 'D';
                    k++;
                    x++;
                    path[k] = 'R';
                    k++;
                }
            }
        }
        while (x > xb)
        {
            if (x - 1 != xc)
            {
                x--;
                path[k] = 'L';
                k++;
            }
            else if (x - 1 == xc)
            {
                if (y <= yc )
                {
                    y++;
                    path[k] = 'U';
                    k++;
                    x--;
                    path[k] = 'L';
                    k++;
                }
                else if (y > yc)
                {
                    y--;
                    path[k] = 'D';
                    k++;
                    x--;
                    path[k] = 'L';
                    k++;
                }
            }
        }

        while (y < yb)
        {
            if (y + 1 != yc)
            {
                y++;
                path[k] = 'U';
                k++;
            }
            else if (y + 1 == yc && x==xc)
            {
                if (x <= xc )
                {
                    x++;
                    path[k] = 'R';
                    k++;
                    y++;
                    path[k] = 'U';
                    k++;
                }
                else if (x > xc)
                {
                    x--;
                    path[k] = 'L';
                    k++;
                    y++;
                    path[k] = 'U';
                    k++;
                }
            }
        }
        while (y > yb)
        {
            if (y - 1 != yc)
            {
                y--;
                path[k] = 'D';
                k++;
            }
            else if (y - 1 == yc )
            {
                if (x <= xc)
                {
                    x++;
                    path[k] = 'R';
                    k++;
                    y--;
                    path[k] = 'D';
                    k++;
                }
                else if (x > xc)
                {
                    x--;
                    path[k] = 'L';
                    k++;
                    y--;
                    path[k] = 'D';
                    k++;
                }
            }
        }
    }

    printf("%d\n",k);
    for (int i=0; i<k;i++)
    {
        printf("%c",path[i]);
    }
    return 0;
}