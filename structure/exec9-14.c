//巢狀結構 顯示
#include<stdio.h>
#include<stdlib.h>
#include<time.h>
struct product
{
    char pName[20];
    char pID[10];
    int sales[4];
    float fAve;
};
struct invoice
{
    char customer[20];
    char date[12];
    struct product prd;
}inv={"招搖資訊公司","2016/11/12","電腦","p01"};
int main()
{
    printf("公司名稱：%s",inv.customer);
    printf(" 交易日期：%s\n",inv.date);
    printf("產品名稱：%s",inv.prd.pName);
    printf(" 產品標號：%s\n",inv.prd.pID);
    for (int i = 0;i < 4;i++)
    {
        printf("輸入第%d季購買量：", i + 1);
        scanf("%d", &inv.prd.sales[i]);
        inv.prd.fAve += inv.prd.sales[i];
    }
    printf("平均購買量: %8.2f\n",inv.prd.fAve/4.0);
    return 0;
}

