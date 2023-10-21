#include<stdio.h>
#include<math.h>
#include<string.h>

int main()
{
    int n;
    scanf("%d",&n);
    char threeNum[20];
    int result=0,k=0;

    for (int i = 0; i < n; i++)
    {
        result = 0;
        k = 0;
        scanf("%s",threeNum);
        int l = strlen(threeNum);
        for (int i = 0; i < l; i++)
        {
            if (threeNum[i] == '1')
            {
                result += (int) pow(3,l - 1- i);
                k++;
            }
            else if (threeNum[i] == '0')
            {
                result += 0;
                k++;
            }
            else if (threeNum[i] == 'Z')
            {
                result -= (int) pow(3,l-1-i);
                k++;
            }
            else
            {
                printf("Radix Error\n");
                break;
            }
        }
        if (k == l)
        {
            printf("%d\n",result);
        }
    }
    return 0;
}