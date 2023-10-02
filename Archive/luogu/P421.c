#include<stdio.h>

int main()
{
    int money, price, a, b;
    scanf("%d %d",&a, &b);
    price = 19;
    money = 10*a + b;
    printf("%d",money/price);
    return 0;
}