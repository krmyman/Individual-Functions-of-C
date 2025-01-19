#include<stdio.h>
#include<stdlib.h>
int main()
{
    int ix = 1, iEven = 0, iOdd = 0;
    while (ix <= 100)
    {
        if (ix % 2)iEven += ix;
        else iOdd += ix;
        ix++;
    }
    printf("偶數:2+4...+100 = %4d\n", iEven);
    printf("奇數:1+3...+99 = %4d\n", iOdd);
    system("pause");
    return 0;
}