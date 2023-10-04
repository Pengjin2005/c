/*使用模拟而不通过计算处理周末的复杂情况，
计算机思维：以简代繁*/
#include<stdio.h>

int main()
{
    long long x,n,sum;
    sum = 0;
    scanf("%lld %lld",&x,&n);
    for (int i =0;i<n;++i)
    { 
        if (x!=6&&x!=7)
            sum += 250;
        if (x == 7)
            x = 1;
        else //此处else且不能忘记，不然就会跳过所有周一！！！
            x++;
    }
    printf("%lld",sum);
    return 0;
}