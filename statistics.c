#include<stdio.h>

int main()
{
    int n;
    char string[1005] = {0};
    scanf("%d",&n);
    scanf("%s",string);
    char statics[100][1005];
    int bucket[55] = {0};

    int i, j; // 让整个统计图为空
    for (i=0; i < 1005; i++)
    {
        for (j=0; j < 100; j++)
        {
            statics[j][i] = ' ';
        }
    }

    for (i = 1; i <= n; i++) // 在奇数位存放小写字母个数，偶数位存放大写字母个数
    {
        for (j = 0; j < 26; j++)
        {
            if (string[i-1] == 'a' + j)
            {
                bucket[2*(j+1)-1]++;
            }
            else if (string[i-1] == 'A' + j)
            {
                bucket[2*(j+1)]++;
            }
        }
    }

        int width = 0; //表格宽度，仅计算字母
        for (i = 0; i < 55; i++)
    {
        if (bucket[i] != 0)
        {
            width++;
        }
    }

    int height=bucket[1];//表格高度-2
    for(i = 0; i < 55; i++)
        {   
            if (bucket[i] > height)
            {
                height = bucket[i];
            }
        }
    
    int start=1; //把字母依次填入，
    for (int k = 1; k <= 100; k++)
    {
        for (i=start;i<=55;i++)
        {
            if (bucket[i] != 0)
            {
                if (i % 2 == 0)
                {
                    statics[k][0] = 'A' + i/2 - 1;
                    for (int p = 2; p <=bucket[i]+1; p++)
                    {
                        statics[k][p] = '=';
                    }
                }
                else if (i % 2 != 0)
                {
                    statics[k][0] = 'a' + (i+1)/2 - 1;
                    for (int p = 2; p <=bucket[i]+1; p++)
                    {
                        statics[k][p] = '=';
                    }
                }
                break;
            }
        }

        if (i % 2 != 0 && bucket[i+1] == 0) // 加上空格
        {
            k++;
        }
        else if (i % 2 == 0 && bucket[i] != 0)
        {
            k++;
        }

        start = i + 1;
    }

    for (i = 1; i <= 100; i++) // 计算空格宽度
    {
        if (statics[i][0] == ' ' && statics[i+1][0] != ' ')
        {
            width++;
        }
    }
    width--;

    for (i = 1; i <= width; i ++) // 画分隔符
    {
        statics[i][1] = '-';
    }

    for (int y = height+1;y > -1; y--) // 打印
    {
        for (int x = 1; x <= width; x++)
        {
            printf("%c",statics[x][y]);
        }
        printf("\n");
    }
    return 0;
}