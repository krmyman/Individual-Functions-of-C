#include<stdio.h>
#include<stdlib.h>
#include<string.h>
struct school
{
    char name[20];
    char type[20];
    int number;
};
struct company
{
    char name[20];
    char type[20];
};
struct invoice
{
    char customer[20];
    char date[12];
    int type;
    union
    {
        struct school sobj;
        struct company cobj;
    };
}inv;
int main()
{
    int opt;
    do
    {
        printf("請選擇資料別- 1(學校) 2(公司) 0(離開)");scanf("%d", &opt);
        inv.type = opt;
        if (opt == 1)
        {
            printf("請輸入學校發票的標頭:");scanf("%s", &inv.customer);
            printf("請輸入學校發票的日期:");scanf("%s", &inv.date);
            printf("請輸入學校的名稱:");scanf("%s", &inv.sobj.name);
            printf("請輸入學校的性質:");scanf("%s", &inv.sobj.type);
            printf("請輸入學校學生人數:");scanf("%d", &inv.sobj.number);
        }
        else if (opt == 2)
        {
            printf("請輸入公司發票的標頭:");scanf("%s", &inv.customer);
            printf("請輸入公司發票的日期:");scanf("%s", &inv.date);
            printf("請輸入公司的名稱:");scanf("%s", &inv.cobj.name);
            printf("請輸入公司的性質:");scanf("%s", &inv.cobj.type);
        }
    } while (opt != 0);
    return 0;
}
