#include<stdio.h>
#include<stdlib.h>
int main()
{
    FILE *file;
    file = fopen("story.txt","w");//（建立新檔）檔案已存在則會清除內容重寫
    if(file == NULL)
    {
        printf("檔案無法開啟\n");
        return 0;
    }
    fprintf(file,"%s\n","\nToday is a good day!");
    fclose(file);
    return 0;
}