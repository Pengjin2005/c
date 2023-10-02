#include<stdio.h>
#include<math.h>

int main()
{
    int h, r;
    double volume;
    int buckets;
    scanf("%d %d", &h, &r);
    volume = h * (3.14 * r * r);
    buckets = floor(20000 / volume) + 1;
    printf("%d",buckets);
    return 0;
}