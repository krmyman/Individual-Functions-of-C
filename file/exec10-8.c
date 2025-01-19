#include<stdio.h>
#include<stdlib.h>
struct stddata
{
    int ID;
    char name[10];
    char birthday[10];
}std[5];
int main()
{
    FILE* file;
    int i = 0;
    if ((file = fopen("student.txt", "r")) == NULL)
    {
        printf("檔案無法開啟\n");
        return 0;
    }
    while (!feof(file))
    {
        if (fscanf(file, "%d %s %s", &std[i].ID, std[i].name, std[i].birthday) != EOF)
            i++;
    }
    int inum = i;
    printf("學號    姓名    生日\n");
    for (int j = 0;j < inum;j++)
    {
        printf("%d  %s  %s\n", std[j].ID, std[j].name, std[j].birthday);
    }
    fclose(file);
    return 0;
}
