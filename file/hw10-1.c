#include<stdio.h>
#include<stdlib.h>
#include<ctype.h>
int main()
{
    FILE *file;
    char readch;
    int asum=0,esum=0,isum=0,osum=0,usum=0;
    if((file = fopen("story.txt","r")) == NULL)
    {
        printf("檔案無法開啟\n");
        return 0;
    }
    while(!feof(file))
    {
        readch = fgetc(file);
        printf("%c",readch);
        if(readch == 'a'||readch == 'A') asum++;
        if(readch == 'e'||readch == 'E')esum++;
        if(readch == 'i'||readch == 'I')isum++;
        if(readch == 'o'||readch == 'O')osum++;
        if(readch == 'u'||readch == 'U')usum++;
    }
    printf("母音 a 出現%2d次\n母音 e 出現%2d次\n母音 i 出現%2d次\n母音 o 出現%2d次\n母音 u 出現%2d次\n",asum,esum,isum,osum,usum);
    return 0;

}