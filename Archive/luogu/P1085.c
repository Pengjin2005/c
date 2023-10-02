#include<stdio.h>

int main()
{
    int i;
    int a[7], b[7], t[7];
    for (int i = 0; i <= 7 ; ++i)
    {
        scanf("%d %d",&a[i],&b[i]);
        t[i] = a[i] + b[i];
    }
    int max = t[1], max_index = 1;
    for (int i = 0; i <= 7 ; ++i)
    {
        if (t[i] > 8 && t[i] > max)
        {
                max = t[i];
                max_index = i;
        }
    }
    max_index += 1;
    if (max <= 8)
        printf("0");
    else
        printf("\n%d",max_index);
    return 0;
}