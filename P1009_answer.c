/*高精度加法与乘法*/
#include<stdio.h>
int main()
{
    int i,A[4]={0},B[4]={0},n,j;
    scanf("%d", &n);
    A[0]=B[0]=1;
    for (i=2;i<=n;i++){//用于累乘
        for (j=0;j<3;j++)//用于进位
            B[j]*=i;//并不是每一位都乘上数字，因为后面全部是0
        for (j=0;j<3;j++)
            if (B[j]>9){//乘后进位
                B[j+1] += B[j]/10;
                B[j]%=10;
            }
            /*下面计算的是加法*/
        for (j=0;j<3;j++){
            A[j]+=B[j];
            if (A[j]>9) {
                A[j+1] += A[j]/10;
                A[j]%=10;
            }
        }
    }
    for (i=3;i>=0&&A[i]==0;i--);//不输出0
        for (j=i;j>=0;j--) 
            printf("%d", A[j]);
    return 0;
}