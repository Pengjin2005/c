#include<stdio.h>

int main()
{
    int n, i, j;
    scanf("%d",&n);
    int num[10005] = {0};
    int count[10005] = {0};
	for (i = 0;i < 2 * n - 1;i++) 
    {
		scanf("%d", &j);
		num[i] = j;
		count[j]++;
	}
	for (i = 0;i < n * 10;i++) 
    {
		if (count[i] == 1) 
        { 
			printf("%d", i);
		}
	}
}