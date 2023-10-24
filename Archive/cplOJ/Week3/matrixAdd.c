#include<stdio.h>

int Sum(int x[], int num)
{
    int s = 0;
    for (int i = 0; i < num; i++)
    {
        s += x[i];
    }
    return s;
}

int main()
{
    int m1[2][2] = {1 ,1,1,1};
    printf("%d", Sum(m1, 2*2));
    return 0;
}