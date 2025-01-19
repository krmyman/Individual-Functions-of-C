#include<stdio.h>
#include<stdlib.h>
#include<string.h>
struct data
{
    char name[10];
    int cost;
    int sum;
}data[5];
int main()
{
    FILE* file;
    if ((file = fopen("itemlist.txt", "r")) == NULL)
    {
        printf("無法開啟檔案\n");
        return 0;
    }
    int run = 0;
    while (!feof(file))
    {
        if (fscanf(file, "%s %d %d ", data[run].name, &data[run].cost, &data[run].sum) != EOF)
            run++;
    }
    int total = 0;
    printf("品名    單價    數量    總價\n");
    for (int i = 0;i < run;i++)
    {
        printf("%s  %5d  %5d  %5d\n", data[i].name, data[i].cost, data[i].sum, data[i].cost * data[i].sum);
        total += (data[i].cost * data[i].sum);
    }
    printf("                %8d\n", total);
    fclose(file);
    return 0;
}
