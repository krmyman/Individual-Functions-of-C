#include<stdio.h>
#include<stdlib.h>
int sum(int[2][4], int, int);
int main()
{
    int i = 2;
    int y = 4;
    int iNum[2][4] = { {2,48,94,23},{56,37,71,63} };
    sum(iNum, i, y);
    system("pause");
    return 0;
}
int sum(int ary[2][4], int data, int data2)
{
    int sum = 0;
    for (int i = 0;i < data;i++)
    {
        for (int j = 0;j < data2;j++)
        {
            if (!i && j == 0) { printf("%d", ary[i][j]);sum += ary[i][j]; }
            else
            {
                printf(" + %d", ary[i][j]);
                sum += ary[i][j];
            }
        }
    }
    printf(" = %d\n", sum);
}