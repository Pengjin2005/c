#include<stdio.h>

int main()
{
double G = 6.674e-11;
double m, R, M =   77.15;
double F;
scanf("%lf %lf",&m, &R);
F = (G * M * m)/(R*R);
printf("%.3e",F);
return 0;
}