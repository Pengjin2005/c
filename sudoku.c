#include<stdio.h>

int main()
{
    int sudoku[9][9];
    int i, j, input;;
    for (i = 0; i < 9; i++)
    {
        for (j = 0; j < 9; j++)
        {
            scanf("%d",&input);
            sudoku[i][j] = input;
        }
    }
    
    int test1=0, test2=0, test3=0;
    int k;
    for (i = 0; i < 9; i++)
    {
        for (j = 0; j < 9; j++)
        {
            for (k = 0; k < j; k++)
            {
                if (sudoku[i][k] == sudoku[i][j])
                {
                    test1 = 1;
                }
            }
        }
    }

    for (i = 0; i < 9; i++)
    {
        for (j = 0; j < 9; j++)
        {
            for (k = 0; k < j; k++)
            {
                if (sudoku[k][i] == sudoku[j][i])
                {
                    test2 = 1;
                }
            }
        }
    }

    int i1, j1, i2, j2, ik, jk;
    for(i1 = 0; i1 <9; i1 += 3)
    {
        for(j1 = 0; j1 <9; j1 += 3)
        {
            for (i2 = i1; i2 < i1 + 3; i2++)
            {
                for (j2 = j1; j2 < j1 + 3; j2++)
                {
                    for (ik = i1; ik <= i2; ik++)
                    {
                        if (ik == i2)
                        {
                            for (jk = j1; jk < j2; jk++)
                            {
                                if (sudoku[ik][jk] == sudoku[i2][j2])
                                {
                                    test3 = 1;
                                }
                            }
                        }
                        else
                        {
                            for (jk = j1; jk < j1 + 3; jk++)
                            {
                                if (sudoku[ik][jk] == sudoku[i2][j2])
                                {
                                    test3 = 1;
                                }
                            }
                        }
                    }
                }
            }
        }
    }

    if (test1 == 0 && test2 == 0 && test3 == 0)
    {
        printf("YES");
    }
    else
    {
        printf("NO");
    }
    return 0;
}