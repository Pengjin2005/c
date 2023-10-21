/*该代码会超时，因为判断回文数和判断质数二者都不简单，
修改方案：
1.所有的偶数位的回文数都是11的倍数，所以不是质数*/
#include<stdio.h>

int main()
{
    int a, b;
    scanf("%d %d",&a,&b);

    int i, original, reverse, result;//to judge if it is a palindrome
    int k=0, test;;
    for (i = a; i <= b; i++)
    {
        if (i % 2 == 0)
        {
            break;
        }
        test = i;
        k = 0;
        while (test > 0 )
        {
            test /= 10;
            k++;
        }
        if (k % 2 == 0 && test != 11)
        if (i % 10 != 0 && i > 0)
        {
            reverse = 0;
            original = i;
            if (i < 10)
            {
                for (int j = 2; j < i; j++)
                {
                    if (i % j == 0)
                    {
                        break;
                    }
                    if (j == i-1)
                    {
                        printf("%d\n",i);
                    }        
                }
            }
            else
            {
                while (reverse < original)
                {
                    reverse = original %10 + reverse * 10;
                    original /= 10;       
                }   
                if (reverse == original || reverse/10 == original)
            {
                for (int j = 2; j < i; j++)
                {
                    if (i % j == 0)
                    {
                        break;
                    }
                    if (j == i-1)
                    {
                        printf("%d\n",i);
                    }
                }
            }
            }
        }
    }
    return  0;
}