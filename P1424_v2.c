/*使用模拟而不通过计算处理周末的复杂情况，
计算机思维：以简代繁*/
#include<stdio.h>

int main()
{
    long long n, s = 0;
    int x;
    scanf("%d %lld",&x,&n);
    for (int i = 0; i < n; i++)
    {
        if (x == 7)
            x = 1;
        if (x != 6 && x != 7)
            s += 250;
        x++;
    }
    printf("%lld",s);
    return 0;
}