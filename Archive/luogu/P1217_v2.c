#include<stdio.h>

int main()
{
    int a, b;
    scanf("%d %d",&a,&b);
    if (b > 9989899)
    {
        b = 9989899;
    }
    int i;
    if (a % 2 == 0)
    {
        a++;
    }
    for (i = a; i <= b; i += 2)
    {
        if (palindrome(i) == 0)
        {
            continue;
        }
        else if (prime(i) == 1)
        {
            printf("%d\n",i);
        }
    }
    return 0;
}

int prime(int x)
{
    if (x < 2 || x % 2 == 0)
    {
        return 0;
    } 
    else
    {
        for (int i = 2; i <= x/2; i++)
        {
            if (x % i == 0)
            {
                return 0;
            }
        }
        return 1;
    }
}

int palindrome(int x)
{
    int original=x, reverse=0;
    while (reverse < original)
    {
        reverse = reverse * 10 + original % 10;
        original /= 10;
    }

    if (reverse == original || reverse/10 == original)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}