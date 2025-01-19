#include<stdio.h>
#include<stdlib.h>
#include<ctype.h>
int main()
{
    FILE *file;
    char readch;
    int nnum=0,anum=0,bnum=0;
    if((file = fopen("story.txt","r")) == NULL)
    {
        printf("檔案無法開啟\n");
        return 0;
    }
    while(!feof(file))
    {
        readch = fgetc(file);
        printf("%c",readch);
        if(readch == ' ') nnum++;
        if(isalpha(readch))anum++;//判斷是英文就＋＋
        if(readch == '\n')bnum++;
    }
    printf("story.txt 共包含%3d的英文,%3d的空格,%3d列\n",anum,nnum,bnum);
    return 0;

}