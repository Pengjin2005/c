#include<stdio.h>

int main()
{
    int A, B, C, marks;
    scanf("%d %d %d", &A, &B, &C);
    marks = 0.2*A + 0.3*B + 0.5*C;
    printf("%d",marks);
    return 0;
}