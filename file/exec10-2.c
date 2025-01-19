#include<stdio.h>
#include<stdlib.h>
int main()
{
    FILE *file;
    file = fopen("story.txt","a+");//可讀取寫入
    if(file == NULL)
    {
        printf("檔案無法開啟\n");
        return 0;
    }
    fprintf(file,"%s\n","\nToday is a good day!");
    fclose(file);
    return 0;
}