#include<stdio.h>

int main()
{
    int p;
    long long n[49];
    scanf("%d",&p);
    n[0] = 0; 
    n[1] = 1; 
    n[2] = 1;
    for (int i = 3; i <= 48; i++)
    {
        n[i] = n[i-1] + n[i-2];
    }
    printf("%lld.00",n[p]);
    return 0;
}