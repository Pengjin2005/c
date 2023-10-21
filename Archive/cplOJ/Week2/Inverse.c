#include<stdio.h>

int main(){
    int n, k;
    scanf("%d\n",&n);
    char string[n+1];
    scanf("%[^\n]",string);

    scanf("%d",&k);
    for (int i = k - 1; i >= 0; i--)
    {   
        printf("%c",string[i]);
    }
    for (int i = n - 1; i >= k; i--)
    {
        printf("%c",string[i]);
    }
    return 0;
}