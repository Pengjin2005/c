#include<stdio.h>

int main()
{
    double t;
    int n;
    scanf("%lf %d", &t, &n);
    int cups;
    double cc;
    cups = 2 * n;
    cc = t / n;
    printf("%.3lf\n%d",cc,cups);
    return 0;
}