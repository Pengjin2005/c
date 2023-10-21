#include<stdio.h>

int main() {
    int n, sum = 0, s, x = 0;
    scanf("%d",&n);
    for (int i = 0; i <= n; i++){
        scanf ("%d",&s);
        if (sum < i&&s!=0){
            x += i - sum;
            sum = i;
        }
        sum += s;
    }
    printf("%d",x);
    return 0;
}