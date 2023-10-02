#include<stdio.h>

int main()
{
    int a, b, c, d;
    scanf("%d %d %d %d", &a, &b, &c, &d);
    int hour, minute;
    if (d >= b){
        minute = 60 + d - b;
        hour = c - a - 1;        
    }
    else if (d < b){
        minute = 60 + d - b;
        hour = c - a - 1;
    }
    printf("%d %d", hour, minute);
    return 0;
}