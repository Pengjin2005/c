#include<stdio.h>

int main()
{
    int n;
    scanf("%d",&n);
    int i = 1;
    while (i*i <= n)
    {
        printf("%d ",i*i);
        i++;
    }
    return 0;
}
/*根据题目注解，使用眼睛观察第一次提交的程序输出的结果可得*/