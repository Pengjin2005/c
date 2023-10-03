/*字符串与ASCII码*/
#include<stdio.h>

int main()
{
    char isbn[13];
    int  sum=0,k=0;
    int temp;
    scanf("%s",isbn);
    for (int i =0 ; i<12;++i)
    {
        if (isbn[i] != '-')
        {
            k++;
            temp = isbn[i] - '0';
            sum += k*temp;
        }
    }
    sum %= 11;
    if (sum == 10 && isbn[12] == 'X')
        printf("Right");
    else if (sum == isbn[12] - '0')
        printf("Right");
    else
    {
        if (sum == 10)
        {
            sum = 'X';
            isbn[12] = sum;
        }
        else
            isbn[12] = sum + '0' ;
        printf("%s",isbn);
    }
    return 0;
}