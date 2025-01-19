#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main()
{
    int item[3][3][4] = { 0 },total=0,max,min;
    srand((unsigned)time(NULL));
    for (int i = 0;i <= 2;i++)
    {
        for (int j = 0;j <= 2;j++)
        {
            item[0][i][j] = rand() % 100;
        }
    }
    for (int i = 0;i <= 2;i++)
    {
        for (int j = 0;j <= 2;j++)
        {
            item[1][i][j] = rand() % 100;
        }
    }
    for (int i = 0;i <= 2;i++)
    {
        for (int j = 0;j <= 2;j++)
        {
            item[2][i][j] = item[0][i][j] + item[1][i][j];
        }
    }
    max=min=item[0][0][0];
    for (int h = 0;h <= 2;h++)//列印出陣列
    {
        printf("第%2d個3*4二維陣列\n", h+1);
        for (int i = 0;i <= 2;i++)
        {
            for (int j = 0;j <= 2;j++)
            {
                printf(" %3d ", item[h][i][j]);
                total += item[h][i][j];
                if(max<item[h][i][j])max=item[h][i][j];
                if(min>item[h][i][j])min=item[h][i][j];
            }
            printf("\n");
        }
    }
    printf("總和為%5d\n",total);
    printf("最小值為%5d\n",min);
    printf("最大值為%5d\n",max);
    system("pause");
    return 0;
}