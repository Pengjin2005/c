#include<stdio.h>


int main()
{
    int m, n, h_x, h_y, num;
    scanf("%d %d %d %d", n,m, h_x, h_y);
    int x = 0, y = 0;
while (x <=)

}

int danger(int x, int y, int h_x, int h_y)//判断是否可以被马吃掉。
{
    if (x ==  h_x + 2  && y == h_y + 1 )
        return 1;
    else if(x ==  h_x + 1  && y == h_y + 2 )
        return 1;
    else if(x ==  h_x - 1  && y == h_y + 2 )
        return 1;
    else if(x ==  h_x - 2  && y == h_y + 1 )
        return 1;
    else if(x ==  h_x - 1  && y == h_y - 2 )
        return 1;
    else if(x ==  h_x + 1  && y == h_y - 2 )
        return 1;
    else if(x ==  h_x + 2  && y == h_y - 1 )
        return 1;
    else if(x ==  h_x + 2  && y == h_y + 1 )
        return 1;
    else
        return 0;
}