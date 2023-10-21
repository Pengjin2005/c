#include<stdio.h>
#include<math.h>

int main()
{
    double x;
    int n;
    scanf("%lf %d",&x,&n);
    double up, down, sum = 0.0;
    for (int i = 0; i <= n; i++)
    {
        if (x >= 0)
        {
            up = pow(x,2*i+1);
        }
        else if (x < 0)
        {
            up = -1 * pow(-x,2*i+1);
        }
        if (i % 2 == 0)
        {
            up = up;
        }
        else if (i % 2 != 0)
        {
            up = -1 * up;
        }

        down = 2*i + 1;

        sum += up/down;
    }
    sum *= 4;
    printf("%.10lf",sum);
    return 0;
}