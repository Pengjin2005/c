#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<math.h>
#include<ctype.h>

int main()
{
    int n;
    scanf("%d",&n);
    int sgn;
    char tenNum[50] = {0};
    char threeNum[50]= {0};
    int num, l, j, status=0;

    for (int i = 0; i < n; i++)
    {
        for (int i = 0; i < 50; i++)
        {
            tenNum[i] = 0;
            threeNum[i] = 0;
        }//循环赋值为一
        status=0;
        scanf("%s",tenNum);
        if (tenNum[0] == '0')
        {
            printf("0");
        }
        l = strlen(tenNum);//读取十进制数并确定长度
        for (int i = 0; i < l; i++)
        {
            if (isdigit(tenNum[i]) == 0 && tenNum[i] != '-')
            {
                status = 1;
            }
        }//判断是否为合法的十进制

        for (int i = 0; i < l; i++)
        { 
            if (status == 1)//若不合法
            {
                printf("Radix Error\n");
                break;
            }
            else//若合法
            {
                num = atoi(tenNum);//转化为数字
                if (num >= 0)
                {
                    sgn = 1;
                }
                else if (num < 0)
                {
                    sgn = -1;
                    num *= -1;
                }//判断正负数
                
                j = 0;
                while (num > 0)
                {
                    threeNum[j] = num % 3;
                    num /= 3;
                    j++;//改为三进制
                }

                for (int i = 0; i < j; i++)//普通三进制改为平衡三进制
                {
                    if (threeNum[i] == 2)
                    {
                        threeNum[i] = 'Z';
                        threeNum[i+1] += 1;
                        if (i == j-1)
                        {
                            j++;
                        }
                    }
                    else if (threeNum[i] == 3)
                    {
                        threeNum[i] = '0';
                        threeNum[i+1] += 1;
                        if (i == j-1)
                        {
                            j++;
                        }
                    }
                    else if (threeNum[i] == 1)
                    {
                        threeNum[i] = '1';
                    }
                    else if (threeNum[i] == 0)
                    {
                        threeNum[i] = '0';
                    }
                }

                if (sgn == -1)//如果是负数
                {
                    for (int p = j-1 ; p >= 0; p--)
                    {
                        if (threeNum[p] == '1')
                        {
                            threeNum[p] = 'Z';
                        }
                        else if (threeNum[p] == 'Z')
                        {
                            threeNum[p] = '1';
                        }
                    }
                }

                for (int p = j-1 ; p >= 0; p--)
                {
                    printf("%c",threeNum[p]);
                }
                printf("\n");
                break;
            }
        }
    }    
    return 0;
}