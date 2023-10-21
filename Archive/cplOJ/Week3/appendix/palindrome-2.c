#include<stdio.h>

int main()
{
    int n;
    scanf("%d",&n);
    char input[1000005];
    scanf("%s",input);
    for (int i = 0; i < n; i++)
    {
        if ( input[i] == '?' && input[n - 1 - i] != '?')
        {
            input[i] = input[n - 1 - i];
        }
    }

    int mid;
    if (n % 2 == 0)
    {
        mid = n/2;
    }
    else
    {
        mid = n/2 + 1;
    }
    int fix = 0;
    for (int i = 0; i < mid; i++)
    {
        if (input[i] != '?')
        {
            printf("%c",input[i]);
        }
        else if (input[i] == '?')
        {
            printf("%.2d",fix);
            fix ++;
        }
    }

    fix--;
    int expfix = fix;
    char refix[5];
    for (int i = mid; i < n; i++)
    {
        if (input[i] != '?')
        {
            printf("%c",input[i]);
        }        
        else if (input[i] == '?')
        {
            expfix = fix;
            if(expfix >= 10)
            {
                for (int i = 0; i < 2; i++)
                {
                    refix[i] = expfix % 10 + '0';
                    expfix /= 10;
                }
            }
            else if (expfix < 10)
            {
                refix[0] = '0' + expfix;
                refix[1] = '0';
            } 

            for (int i = 0; i < 2; i++)
            {
                printf("%c",refix[i]);
            }
            fix--;
        }
    }
    return 0;
}