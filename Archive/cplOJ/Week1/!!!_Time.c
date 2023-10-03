#include<stdio.h>

int main()
{
    int n, N;
    scanf("%d",&n);
    printf("%d %c\n",n,n);
    N = n + 'a' - 'A';
    printf("%d %c\n",N,N);
    return 0;
}