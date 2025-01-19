//成績系統 排序
#include<stdio.h>
#include<stdlib.h>
int main()
{
    int data[5][4] = { 0 }, max, temp[4] = { 0 };
    for (int i = 0;i <= 4;i++)
    {
        for (int j = 0;j <= 3;j++)
        {
            if (j == 0)
            {
                data[i][j] = i + 1;
            }
            else if (j == 1)
            {
                printf("輸入編號%d的國文成績:", i + 1);
                scanf("%d", &data[i][j]);
            }
            else if (j == 2)
            {
                printf("輸入編號%d的數學成績:", i + 1);
                scanf("%d", &data[i][j]);
            }
            else if (j == 3)data[i][j] = data[i][j - 2] + data[i][j - 1];
        }
    }
    for (int i = 0;i <= 4;i++)
    {
        max = i;
        for (int j = i + 1;j <= 4;j++)
            if (data[max][3] < data[j][3])max = j;//改變max索引
        for (int k = 0;k <= 3;k++)//換位
        {
            temp[k] = data[i][k];
            data[i][k] = data[max][k];
            data[max][k] = temp[k];
        }
    }
    printf("編號 國文 數學 總分\n");
    for (int i = 0;i <= 4;i++)
    {
        for (int j = 0;j <= 3;j++)
        {
            printf("%4d ", data[i][j]);
        }
        printf("\n");
    }
    system("pause");
    return 0;
}