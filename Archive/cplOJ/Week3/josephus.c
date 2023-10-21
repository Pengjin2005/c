#include<stdio.h>

int main()
{
    int n, k;
    scanf("%d %d",&n,&k);

    int people[10005];
    for (int i = 0; i < n; i++)
    {
        people[i] = 1;
    }

    int sum=n, count=0;
    int current=0;
    while (sum > 1)
    {
        count=0;
        while (count < k-1)
        {
            if (people[current] == 1)
            {
                count++;
            }
            current = (current + 1) % n;
        }

        while (people[current] == 0)
        {
            current = (current + 1) % n;
        }
    
        people[current] = 0;
        sum--;
    }


    for (int i = 0; i < n; i++)
    {
        if (people[i] == 1)
        {
            printf("%d",i+1);
        }
    }

    return 0;
}