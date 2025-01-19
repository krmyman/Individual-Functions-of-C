#include<stdio.h>
#include<stdlib.h>
int main()
{
    char cline[256];
    FILE *file;
    file = fopen("myfirst.txt","r");//（建立新檔）檔案已存在則會清除內容重寫
    if(file == NULL)
    {
        printf("檔案無法開啟\n");
        return 0;
    }
    while(fgets(cline,sizeof(cline),file)!=NULL)
    printf("%s",cline);
    fclose(file);
    return 0;
}