#include<stdio.h>
#include<stdlib.h>
int main()
{
    int itemsum[3] = { 0 }, dataArray[3][4] = { 0 }, data, flag = 0;
    printf("輸入商品的銷售量(1:東區 2:南區 3:西區 4:北區)\n");
    for (int i = 0;i <= 2;i++)
    {
        for (int j = 0;j <= 3;j++)
        {
            printf("第%2d 項商品在第%2d 區的銷售量:", i + 1, j + 1);
            scanf("%d", &data);
            rewind(stdin);
            dataArray[i][j] = data;
            itemsum[i] += data;
        }
    }
    for (int i = 0;i <= 2;i++)
    {
        if (i == 0)
        {
            printf("第%2d 項商品的銷售量分別是:", i + 1);
            for (int j = 0;j <= 3;j++)
                printf("%2d", dataArray[i][j]);
            printf(" ,銷售總數量:%2d\n", itemsum[i]);
        }
        else if (i == 1)
        {
            printf("第%2d 項商品的銷售量分別是:", i + 1);
            for (int j = 0;j <= 3;j++)
                printf("%2d", dataArray[i][j]);
            printf(" ,銷售總數量:%2d\n", itemsum[i]);
        }
        else if (i == 2)
        {
            printf("第%2d 項商品的銷售量分別是:", i + 1);
            for (int j = 0;j <= 3;j++)
                printf("%2d", dataArray[i][j]);
            printf(" ,銷售總數量:%2d\n", itemsum[i]);
        }
    }
    system("pause");
    return 0;
}