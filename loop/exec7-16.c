#include<stdio.h>
#include<stdlib.h>
int sum(int[], int);
int main()
{
    int i = 8;
    int iNum[8] = { 2,48,94,23,56,37,71,63 };
    sum(iNum, i);
    system("pause");
    return 0;
}
int sum(int ary[8], int data)
{
    int sum = 0;
    for (int i = 0;i < data;i++)
    {
        if (!i) { printf("%d", ary[i]);sum += ary[i]; }
        else
        {
            printf(" + %d", ary[i]);
            sum += ary[i];
        }
    }
    printf(" = %d\n", sum);
}