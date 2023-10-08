#include<stdio.h>

int main()
{
    int a,b,c;
    int sorted[3];


    scanf("%d %d %d",&a,&b,&c);

    sorted[0] = a;
    sorted[1] = b;
    sorted[2] = c;

    int axis = sorted[0], temp;
    for (int j =0; j<2;j++){
        for (int i = 0; i < 2; i++)
    {
        if (sorted[i] > sorted[i+1])
        {
            temp = sorted[i];
            sorted[i] = sorted[i+1];
            sorted[i+1] = temp;
        }
    }
    }
    char order[3];
    scanf("%s",order);
    for (int i = 0; order[i] != 0; i++)
	{
		switch (order[i])
		{
		case 'A':
			printf("%d ", sorted[0]);
			break;
		case 'B':
			printf("%d ", sorted[1]);
			break;
		case 'C':
			printf("%d ", sorted[2]);
			break;
		}
	}
	printf("\n");

	return 0;
}
