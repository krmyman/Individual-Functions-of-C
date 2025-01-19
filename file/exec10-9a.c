#include<stdio.h>
#include<stdlib.h>
struct stddata
{
    int number;
    char name[20];
    char id[10];
}std[5];
int main()
{
    FILE* file;
    int i = 0;
    if ((file = fopen("product.txt", "r")) == NULL)
    {
        printf("檔案無法開啟\n");
        return 0;
    }
    while (!feof(file))
    {
        if (fscanf(file, "%s %s %d", std[i].name, std[i].id, &std[i].number) != EOF)
            i++;
    }
    int inum = i;
    printf("產品名稱    產品編號    產品存量\n");
    for (int j = 0;j < inum;j++)
    {
        printf("%8s  %8s  %8d\n", std[j].name, std[j].id, std[j].number);
    }
    fclose(file);
    return 0;
}
