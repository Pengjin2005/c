#include<stdio.h>
#include<math.h>

int main()
{{
    int l[2000005];
    for (int j = 0; j <= 2000005; j++)
        l[j] = 0;
    int n, t;
    float a;
    scanf("%d",&n);
    for (int i=1;i<=n;i++)
    {
        scanf("%f %d",&a ,&t);
        int num;
        num = floor(a*t);
        if (l[num] == 0)
            l[num] = 1;
        if (l[num] == 1)
            l[num] = 0;
    }
    for (int p = 0; p <= 2000005; p++)
        if (l[p] == 1)
            printf("%d",p);
    return 0;
}
