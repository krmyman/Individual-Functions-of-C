#include<stdio.h>
#include<stdlib.h>
#include<string.h>
struct data
{
    char name[10];
    int ch;
    int en;
    int ma;
}data[5];
int main()
{
    FILE* file;
    if ((file = fopen("score.txt", "r")) == NULL)
    {
        printf("無法開啟檔案\n");
        return 0;
    }
    int run = 0;
    while (!feof(file))
    {
        if (fscanf(file, "%s %d %d  %d", data[run].name, &data[run].ch, &data[run].en,&data[run].ma) != EOF)
            run++;
    }
    int total = 0;
    float ave=0.0;
    printf("品名    chi    en    ma     tot     ave\n");
    for (int i = 0;i < run;i++)
    {
        printf("%s  %5d  %5d  %5d   %5d     %5.2f\n", data[i].name, data[i].ch, data[i].en, data[i].ma,data[i].ch+data[i].en+data[i].ma,(float)(data[i].ch+data[i].en+data[i].ma)/3.0);
    }
    fclose(file);
    return 0;
}
