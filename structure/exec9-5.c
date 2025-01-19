//結構資料輸出
#include<stdio.h>
#include<stdlib.h>
struct pclist
{
    char pcName[20];
    char pcID[10];
    int first;
    int second;
    int thire;
    int fourth;
}prd1 = { "PC","P01",1234,2214,6492,1234 }, prd2 = { "筆電","P02",1782,3291,2781,5321 }, prd3 = { "手機","P03",6289,6519,5210,2213 };
int main()
{
    printf("產品名稱：%11s\n", prd1.pcName);
    printf("產品編號：%11s\n", prd1.pcID);
    printf("第1季銷量：%10d\n", prd1.first);
    printf("第2季銷量：%10d\n", prd1.second);
    printf("第3季銷量：%10d\n", prd1.thire);
    printf("第4季銷量：%10d\n", prd1.fourth);
    printf("-----------------------------------------\n");
    printf("產品名稱：%11s\n", prd2.pcName);
    printf("產品編號：%11s\n", prd2.pcID);
    printf("第1季銷量：%10d\n", prd2.first);
    printf("第2季銷量：%10d\n", prd2.second);
    printf("第3季銷量：%10d\n", prd2.thire);
    printf("第4季銷量：%10d\n", prd2.fourth);
    printf("-----------------------------------------\n");
    printf("產品名稱：%11s\n", prd3.pcName);
    printf("產品編號：%11s\n", prd3.pcID);
    printf("第1季銷量：%10d\n", prd3.first);
    printf("第2季銷量：%10d\n", prd3.second);
    printf("第3季銷量：%10d\n", prd3.thire);
    printf("第4季銷量：%10d\n", prd3.fourth);
    printf("-----------------------------------------\n");
    return 0;
}
