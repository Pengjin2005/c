#include<math.h>
#include<stdio.h>

int main()
{
    int d=300000.0, p=6000.0;
    float r=0.01, a, b, c;
    double m;
    a=p/(p-d*r);
    b=log10(a);
    c=log10(1+r);
    m=b/c;
    m=round(m);
    printf("%.0lf",m);
    return 0;
}