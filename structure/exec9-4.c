//輸入結構資料
#include<stdio.h>
#include<stdlib.h>
struct product
{
    char cName[20];
    char cID[10];
    int first;
    int second;
    int thire;
    int fourth;
    float fAve;//平均
}product;

int main()
{
    printf("輸入產品名稱：");gets(product.cName);
    printf("輸入產品編碼：");gets(product.cID);
    printf("輸入第一季銷量：");scanf("%d",&product.first);
    printf("輸入第二季銷量：");scanf("%d",&product.second);
    printf("輸入第三季銷量：");scanf("%d",&product.thire);
    printf("輸入第四季銷量：");scanf("%d",&product.fourth);
    product.fAve = (float)(product.first+product.second+product.thire+product.fourth)/4.0f;
    printf("%s的平均銷量為%10.2f\n",product.cName,product.fAve);
    return 0;
}
