/*使用模拟而不通过计算处理周末的复杂情况，
计算机思维：以简代繁*/
#include<stdio.h>

int main()
{
    int x,n,sum = 0;
    scanf("%d %d",&x,&n);
    for (int i =0;i<n;i++)
    { 
        if (x!=6&&x!=7)
            sum += 250;
        if (x == 7)
            x = 1;
    }
    printf("%d",sum);
    return 0;
}