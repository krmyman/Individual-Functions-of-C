#include<stdio.h>
#include<stdlib.h>
int alldata[8][4] = { 0 }, sum[8] = { 0 };
int chose = 0, chose1 = 0;
int main()
{
    printf("選擇 1:輸入成績 2:輸出成績 3:結束程式\n");
    scanf("%d", &chose);
    while (chose != 3)
    {
        if (chose == 1)
        {
            printf("選擇 1:輸入座號 2:輸入國文成績 3:輸入數學成績 4:結束輸入\n");
            scanf("%d", &chose1);
            while (chose1 != 4)
            {
                if (chose1 == 1)
                {
                    printf("請依序輸入8個座號 每個座號以空格分開\n");
                    for (int i = 0;i < 8;i++)
                    {
                        scanf("%d", &alldata[i][0]);
                    }
                    printf("\n");
                }
                else if (chose1 == 2)
                {
                    printf("請依序輸入8個國文成績 每個成績以空格分開\n");
                    for (int i = 0;i < 8;i++)
                    {
                        scanf("%d", &alldata[i][1]);
                    }
                    printf("\n");
                }
                else if (chose1 == 3)
                {
                    printf("請依序輸入8個數學成績 每個成績以空格分開\n");
                    for (int i = 0;i < 8;i++)
                    {
                        scanf("%d", &alldata[i][2]);
                    }
                    printf("\n");
                }
                rewind(stdin);
                printf("選擇 1:輸入座號 2:輸入國文成績 3:輸入數學成績 4:結束輸入\n");
                scanf("%d", &chose1);
            }
        }
        if (chose1 == 4)
            printf("回到主選單\n");
        if (chose == 2)
        {
            printf("座號：國文成績：數學成績：總成績：\n");
            for (int i = 0;i < 8;i++)
            {
                sum[i] = alldata[i][1] + alldata[i][2];
                alldata[i][3] = sum[i];
            }
            for (int i = 0;i < 8;i++)
            {
                for (int j = 0;j < 4;j++)
                {
                    printf("%6d", alldata[i][j]);
                }
                printf("\n");
            }
        }
        printf("選擇 1:輸入成績 2:輸出成績 3:結束程式\n");
        scanf("%d", &chose);
    }
    if (chose == 3)printf("程式結束\n");
    system("pause");
    return 0;
}