#include<stdio.h>

void quickSort(int sdata[], int first, int last);
int split(int sdata[], int first, int last);

int main()
{
    int sdata[7]={5,6,8,7,9,1,3};
    int  first=0, last=6;
    quickSort(sdata,first,last);
    for (int i = 0; i < 7; i++)
    {
        printf("%d",sdata[i]);
    }
    return 0;
}

void quickSort(int sdata[], int first, int last)
{
    if (first < last)
    {
        int splitPoint = split(sdata, first, last);
        quickSort(sdata, first, splitPoint-1);
        quickSort(sdata, splitPoint+1, last);
    }
}

int split(int sdata[], int first, int last)
{
    int pivot = sdata[first];
    int splitPoint = first;
    for (int toCompare = first + 1; toCompare <= last; toCompare++)
    {
        if (sdata[toCompare] < pivot)
        {
            splitPoint++;
            int temp = sdata[splitPoint];
            sdata[splitPoint] = sdata[toCompare];
            sdata[toCompare] = temp;
        }
    }
    sdata[first] = sdata[splitPoint];
    sdata[splitPoint] = pivot;
    return splitPoint;
}
