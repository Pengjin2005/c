#include<stdio.h>

int main()
{
    int s, v;
    scanf("%d %d",&s, &v);//读取所需时间
    int min;
    if ((s%v != 0 ))
        min = (s/v)  + 1 + 10;
    else
        min = (s/v)   + 10;
    int hour = (min/60);
    min -= 60*hour;//转化成时分秒

    int HH, MM;//计算24小时制；
    if (min == 0)//整点情况
    {
        MM = 0;
        if (hour <= 8)
        {
            HH = 8 - hour;
        }
        if (hour > 8)
        {
            HH = 24 - (hour - 8);
        }
    }
    else if (min != 0)//非整点，时再往前一个小时.
    {
        MM = 60 - min;
        if (hour <= 8)
        {
            HH = 8 - hour - 1;
        }
        if (hour > 8)
        {
            HH = 24 - (hour - 8) - 1;
        }
    }

    if (HH < 10)
    {
        if (MM < 10){
            printf("0%d:0%d",HH,MM);
        }
        else{
            printf("0%d:%d",HH,MM);
        }
    }
    else if (HH >= 10){
        if (MM < 10){
            printf("%d:0%d",HH,MM);
        }
        else{
            printf("%d:%d",HH,MM);
        }
    }
    return 0;
}