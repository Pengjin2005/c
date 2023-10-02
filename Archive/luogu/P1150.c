#include<stdio.h>

int main()
{
    int n, k;
    scanf("%d %d",&n,&k);
    int sum, cut;
    sum = n;
    cut = n;
    while (cut >= k)
    {
        cut = cut - k + 1;
        sum += 1;
    }
    printf("%d",sum);
    return 0;
}