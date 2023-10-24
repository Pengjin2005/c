#include <stdio.h>
#include <string.h>

int main()
{
    int n;
    scanf("%d", &n);
    char line[1005];
    scanf("%s", line);
    int l = strlen(line);

    char life[1024] = {0};
    for (int i = 3; i < l + 6; i++)
    {
        life[i] = line[i-3];
    }

    int ally = 0, axis = 0, A = 0, B = 0;
    char tolife[1024];
    for (int k = 0; k < n; k++)
    {
        for (int i = 3; i < l + 6; i++)
        {
            ally = 0;
            axis = 0;
            A = 0;
            B = 0;
            for (int j = i - 3; j <= i + 3; j++)
            {
                if (j == i)
                {
                    continue;
                }
                if (life[i] != '.')
                {
                    if (life[j] == life[i])
                    {
                        ally++;
                    }
                    else if (life[j] == '.')
                    {
                    }
                    else if (life[i] == 'A' && life[j] == 'B')
                    {
                        axis++;
                    }
                    else if (life[i] == 'B' && life[j] == 'A')
                    {   
                        axis++;
                    }
                }
                else if (life[i] == '.')
                {
                    if (life[j] == 'A')
                    {
                        A++;
                    }
                    else if (life[j] == 'B')
                    {
                        B++;
                    }
                }
            }

            if (life[i] != '.')
            {
                if (axis != 0)
                {
                    tolife[i] = '.';
                }
                else if (ally >= 5 || ally <= 1)
                {
                    tolife[i] = '.';
                }
                else
                {
                    tolife[i] = life[i];
                }
            }
            else if (life[i] == '.')
            {
                if (A == 0 && B >= 2 && B <= 4)
                {
                    tolife[i] = 'B';
                }
                else if (B == 0 && A >= 2 && A <= 4)
                {
                    tolife[i] = 'A';
                }
                else
                {
                    tolife[i] = life[i];
                }
            }
        }
        
        for (int i = 3; i < l + 6; i++)
        {
            life[i] = tolife[i];
        }
    }
    for (int i = 3; i < l +3; i++)
    {
        printf("%c",tolife[i]);
    }
    return 0;
}