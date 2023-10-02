#include<stdio.h>
#include<math.h>

int main()
{
    int T;
    scanf("%d", &T);
    if (T == 1)
    {
        printf("I love Luogu!");
    }
    else if (T == 2)
    {
        printf("6 4");
    }
    else if (T == 3)
    {
        printf("3\n12\n2");
    }
    else if (T == 4)
    {
        double a;
        a = 500.0 / 3.0;
        printf("%.3lf",a);
    }
    else if (T == 5)
    {
        int b;
        b = (260+220)/(12+20);
        printf("%d",b);
    }
    else if(T == 6)
    {
        double c;
        c = sqrt(36.0 + 81.0);
        printf("%lf",c);
    }
    else if (T == 7)
    {
        int d = 100;
        d += 10;
        printf("%d\n",d);
        d -= 20;
        printf("%d\n",d);
        printf("0");
    }
    else if (T == 8)
    {
        double e1, e2, e3;
        int r = 5;
        e1 = 2 * r * 3.141593;
        e2 = 3.141593 * r * r;
        e3 = (3.0/4.0) * 3.141593 * r * r * r;
        printf("%lf\n%ld\n%ld",e1,e2,e3);
    }
    else if (T == 9)
    {
        int f;
        f =( ((1+1)*2+1)*2 + 1) * 2;
        printf("%d",f);
    }
    else if (T == 10)
    {
        printf("9");
    }
    else if (T == 11)
    {
        double ti;
        ti = 100.0/3.0;
        printf("%lf",ti);
    }
    else if (T == 12)
    {
        int g, h;
        g = 'M' - 'A' + 1;
        h = 'A' + 18 -1;
        printf("%d\n%c",g,h);
    }
    else if (T == 13)
    {
        double i;
        int j;
        i = (4.0/3.0) * 3.141593 * 4 * 4 * 4 + (4.0/3.0) * 3.141593 * 10 * 10 * 10;
        i = cbrt(i);
        j= floor(i);
        printf("%d",j);
    }
    else if (T == 14)
    {
        printf("50");
    }
    return 0;
}