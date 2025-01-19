#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main()
{
    FILE* file;
    char cstr[80];
    char csearch[10];
    int flag = 0;
    file = fopen("student.txt","w");//（建立新檔）檔案已存在則會清除內容重寫
    fclose(file);
    if ((file = fopen("student.txt", "r")) == NULL)
    {
        printf("無法讀取檔案\n");
        return 0;
    }
    printf("輸入學號:");
    scanf("%s", &csearch);
    while (!feof(file))
    {
        fgets(cstr, 80, file);
        if (strncmp(cstr, csearch, strlen(csearch)) == 0)
        {
            printf("%s", cstr);flag = 1;
        }
    }
    if (!flag)printf("找不到學生\n");
    fclose(file);
    return 0;
}