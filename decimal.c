#include<stdio.h>
#include<math.h>

int main()
{
    int len, N, num=0;
    scanf("%d %d",&len, &N);
    char nNum[31];
    int valueNum[31];
    scanf("%s",nNum);

    int status = 0;
    if (N <= 10)
    {
        for (int i = 0; i < len; i++)
        {
            if (nNum[i] > '0' + N - 1)
            {
                status = 1;
            }
        }
    }
    else
    {
        for (int i = 0; i < len; i++)
        {
            if (nNum[i] > 'A' + N - 11)
            {
                status = 1;
            }
        }
    }

    for (int i = 0; i < len; i++)
    {
        if (nNum[i]>='0' && nNum[i] <='9')
        {
            valueNum[i] = nNum[i] - '0';
        }
        else if (nNum[i] >= 'A' && nNum[i] <= 'Z')
        {
            valueNum[i] = nNum[i] - 'A' + 10;
        }
    }

    if (status == 1)
    {
        printf("Error");
    }
    else
    {
        for (int i = 0; i < len; i++)
        {
            num += valueNum[i] * pow(N,len - i - 1);
        }
        printf("%d",num);
    }
    return 0;
}