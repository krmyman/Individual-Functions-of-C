//char 指標陣列
#include<stdio.h>
#include<stdlib.h>
int main()
{
    char* chptr[3] = { "Tom","Lily","James Lee" };
    for (int i = 0;i < 3;i++)puts(chptr[i]);//puts輸出字串直到空字元但不包括空字元
    for (int i = 0;i < 3;i++)printf("第%d位:%s\n", i, chptr[i]);
    for (int i = 0;i < 3;i++)printf("第%d位:%s\n", i, *(chptr + i));
    return 0;
}