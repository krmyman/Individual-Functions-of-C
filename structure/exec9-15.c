//結構函式
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
struct pclist
{
    char pcName[20];
    char pcID[10];
    int sales[4];
    float fAve;
}prd = {"pc","p01",1234,2211,3213,4213};
void printinfo(struct pclist);
int main()
{   
        for (int j = 0;j < 4;j++)
            prd.fAve += prd.sales[j];
        printf("--------------呼叫printfinfo函式前列印------------\n");
        printf("%s 的平均銷量為  %6.2f\n", prd.pcName, prd.fAve /= 4.0);
        printinfo(prd);
        printf("--------------呼叫printfinfo函式後列印------------\n");
        printf("%s 的平均銷量為  %6.2f\n", prd.pcName, prd.fAve);
    return 0;
}
void printinfo (struct pclist prd)
{
    printf("----------在printinfo函式中,修改資料前列印------\n");
    printf("%s 的平均銷量為  %6.2f\n", prd.pcName, prd.fAve);
    strcpy(prd.pcName,"個人電腦");prd.sales[0] = 2000;
    printf("----------在printinfo函式中,修改資料後列印------\n");
    printf("%s 的平均銷量為  %6.2f\n", prd.pcName, prd.fAve);
}
