#include<stdio.h>

int main()
{
    unsigned long long x, n, sum = 0; //注意数据类型的取值范围
    scanf("%d %d",&x,&n);
    int weeks;
    weeks = n/7;
    sum += 250*5*weeks;
    n -= 7*weeks;
    if (x + n >= 7)
        sum += (n - 1)*250;
    else if (x + n == 6)
        sum += (n )*250;
    else
        sum += (n+1)*250;
    printf("%d",sum);
    return 0;
}