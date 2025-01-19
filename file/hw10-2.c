#include<stdio.h>
#include<stdlib.h>
#include<ctype.h>
int main()
{
    FILE *file;
    char readch;
    int sum[26]={0};
    if((file = fopen("story.txt","r")) == NULL)
    {
        printf("檔案無法開啟\n");
        return 0;
    }
    while(!feof(file))
    {
        readch = fgetc(file);
        printf("%c",readch);
        if(readch-97<0)sum[readch-65]++;
        else sum[readch-97]++;
    }
    for(int i=0;i<26;i++)
    printf("字母%c和%c出現%2d次\n",i+97,i+65,sum[i]);
    return 0;

}