#include<stdio.h>

int main()
{
    int n, k;
    scanf("%d %d",&n,&k);
    int a[15];
    int scan;
    for (int i = 0; i < n; i++)
    {
        scanf("%d",&scan);
        a[i] = scan;
    }
    int pivot = a[k-1];

    int l = 0, r = n - 1;
    int temp;
    while (l != r)
    {
        while (l != r && a[l] < pivot)
        {
            l++;
        }
        while(l != r && 
        a[r] >= pivot)
        {
            r--;
        }
        if (l != r)
        {
            temp = a[l];
            a[l] = a[r];
            a[r] = temp;
        }
    }
    
    int pivotLocation;
    for (int i = 0; i < n; i++)
    {
        if (a[i] == pivot)
        {
            pivotLocation = i;
        }
    }

    if (a[pivotLocation-1] > a[pivotLocation])
    {
        temp = a[l];
        a[l] = a[pivotLocation];
        a[pivotLocation] = temp;
    }

    for (int i = 0; i < n; i++)
    {
        printf("%d ",a[i]);
    }
    return 0;
}