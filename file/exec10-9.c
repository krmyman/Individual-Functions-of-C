#include<stdio.h>
#include<stdlib.h>
struct data
{
    char name[20];
    char ID[12];
    char number[5];
}data[10];
int main()
{
    FILE *file;
    int i=0;
    if((file = fopen("product.txt","w"))==NULL)
    {
        printf("檔案無法開啟\n");
        return 0;
    }
    printf("--------不輸入資料請按q,繼續輸入請按其餘任意鍵\n");
    while (getchar()!='q')
    {
        printf("輸入產品名稱:");scanf("%s",data[i].name);
        printf("輸入產品編號:");scanf("%s",data[i].ID);
        printf("輸入產品產品存量:");scanf("%s",data[i].number);
        fprintf(file,"%s %s %s\n",data[i].name,data[i].ID,data[i].number);
        rewind(stdin);
        printf("--------不輸入資料請按q,繼續輸入請按其餘任意鍵\n");
        i++;
    }
    fclose(file);
    return 0;
}