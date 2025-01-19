#include<stdio.h>
#include<stdlib.h>
int iabs(int);
float fabs(float);
double dabs(double);

int main()
{
    int y = -3;
    float f = -3.0f;
    double d = 3.0;
    printf("-3 絕對值為 %d\n", iabs(y));
    printf("-3 絕對值為 %15.10f\n", fabs(f / 7));
    printf("-3 絕對值為 %15.10f\n", dabs(d / 7));
    system("pause");
    return 0;
}
int iabs(int x)
{
    return x < 0 ? -x : x;
}
float fabs(float x)
{
    return x < 0 ? -x : x;
}
double dabs(double x)
{
    return x < 0 ? -x : x;
}