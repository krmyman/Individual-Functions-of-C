//prd4=prd1
#include<stdio.h>
#include<stdlib.h>
struct pclist
{
    char pcName[20];
    char pcID[10];
    int sales[4];
    float fAve;
}prd[3];
int main()
{
    for (int i = 0;i < 3;i++)
    {
        printf("輸入產品名稱：");gets(prd[i].pcName);
        rewind(stdin);
        printf("輸入產品編號：");gets(prd[i].pcID);
        rewind(stdin);
        for (int j = 0;j < 4;j++)
        {
            printf("輸入第%d季的銷量：", j+1);scanf("%d", &prd[i].sales[j]);
            rewind(stdin);
        }
    }
    for (int i = 0;i < 3;i++)
    {
        for (int j = 0;j < 4;j++)
            prd[i].fAve += prd[i].sales[j];
        printf("%s 的平均銷量為  %6.2f\n", prd[i].pcName, prd[i].fAve /= 4.0);
    }
    return 0;
}
