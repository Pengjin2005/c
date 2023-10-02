#include<stdio.h>

int main()
{
    int a, b, c;
    scanf("%d %d %d",&a,&b,&c);

    int max, mid, min;
    max = a >= b ? (a >= c ? a : c) : (b >= c ? b : c);
    min = a <= b ? (a <= c ? a : c) : (b <= c ? b : c);
    if ( max == c)
        mid = a >= b ? a : c;
    else if (max == b)
        mid = a >= c ? a : c;
    else
        mid = b >= c ? b : c;//Used to sort the lines. 

    if (mid + min <= max || max - min >= mid || max - mid >= min || max - mid >= min || min == 0 || mid == 0 || max == 0)
        printf("Not triangle\n");
    else
    {
        if (mid*mid + min*min == max*max)
            printf("Right triangle\n");
        else if (mid*mid + min*min > max*max)
            printf("Acute triangle\n");
        else if (mid*mid + min*min < max*max)
            printf("Obtuse triangle\n");
            
        if ( mid == min && mid !=0 && min != 0 && max != 0)
    {
        printf("Isosceles triangle\n");
        if (mid == min && mid == max && mid !=0 && min != 0 && max != 0)
            printf("Equilateral triangle\n");
    }
    }
    return 0;
}