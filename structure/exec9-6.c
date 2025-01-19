//prd4=prd1
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
}prd1 = { "PC","P01",1234,2214,6492,1234 }, prd2 = { "筆電","P02",1782,3291,2781,5321 }, prd3 = { "手機","P03",6289,6519,5210,2213 }
, prd4;
int main()
{
    prd4 = prd1;
    printf("輸入耳機的編號：");gets(prd4.pcID);
    printf("輸入第1季的銷量：");scanf("%d", &prd4.first);
    printf("------------------------------------\n");
    printf("耳機的編號：%11s\n", prd4.pcID);
    printf("第1季銷量：%10d\n", prd4.first);
    printf("第2季銷量：%10d\n", prd4.second);
    printf("第3季銷量：%10d\n", prd4.thire);
    printf("第4季銷量：%10d\n", prd4.fourth);
    return 0;
}
