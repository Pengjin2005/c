#include<stdio.h>

int main()
{
    int a,b,c;
    int sortedOrder[3];
    scanf("%d %d %d",&a,&b,&c);
    sortedOrder[2] = a>b ? (a>c?a:c): (b>c?b:c);
    sortedOrder[0] = a<b ? (a<c?a:c): (b<c?b:c);
    if (sortedOrder[2]==a)
        sortedOrder[1] = b>c ? b:c;
    else if (sortedOrder[2]== b)
        sortedOrder[1] = a>c?a:c;
    else
        sortedOrder[1]=a>b?a:b;
    char order[3];
    scanf("%s",order);
    int i,j;
    for ( i=0;i<3;i++)
    {
        j = order[i]-'A';
        printf("%d ",sortedOrder[j]);
    }
    return 0;
}