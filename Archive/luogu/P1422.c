#include<stdio.h>

int main()
{
    double power, bill;
    scanf("%lf",&power);
    if ( power <= 150)
    {
        bill = power * 0.4463;
    }
    else if ( power > 150 && power <= 400)
    {
        bill = 150*0.4463 + (power - 150)*0.4663;
    }
    else
    {
        bill = 150*0.446 + 250*0.4663 + (power - 400 )*0.5663;
    }
    printf("%.1lf",bill);
    return 0;
}