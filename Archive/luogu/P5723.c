#include<stdio.h>

int main()
{
    int L, sum=0;
    scanf("%d",&L);
    int i, j, k=0;
    for (i = 1; i <=L; i++)
    {
        for (j =2; j <= i;  ++j)
        {
            if (i % j ==0)
            {
                break;
            }
        }
        if (  j == i&& sum+i <= L)
            {
                sum += i;
                k++;
                printf("%d\n",i);
            }
    }
    printf("%d",k);
    return 0;
}