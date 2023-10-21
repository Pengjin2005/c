#include <stdio.h>
#include <math.h>

int main()
{
    int d = 300000.0, p = 6000.0;
    float r = 0.01, a, b, c;
    double m;
    a = p / (p - d * r);
    b = log10(a);
    c = log10(1 + r);
    m = b / c; // 使用浮点数相除
    printf("%.2f", m); // 打印浮点数结果，保留两位小数
    return 0;
}