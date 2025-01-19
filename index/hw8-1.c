#include<stdio.h>
#include<stdlib.h>
double Power(double, int, double*);
double Factor(int, double*);
double dCos(double);
double a = 1.0f, b = 1.0f;
int main()
{
    printf("Cos(30) = %f\n", dCos(3.1415926 / 6.0));
    system("pause");
    return 0;
}
double Factor(int n, double* Fptr)
{
    for (int i = 1;i <= n;i++)(*Fptr) *= (double)i;
}
double Power(double x, int n, double* Pptr)
{
    for (int i = 1;i <= n;i++) (*Pptr) *= x;
}
double dCos(double angle)
{
    int sign = -1;
    double ret = 1.0;
    for (int i = 2;i <= 16;i += 2)
    {
        a=1.0f;
        b=1.0f;
        Power(angle, i, &a);
        Factor(i, &b);
        ret += (double)sign * a / b;
        sign = -sign;
    }
    return ret;
}