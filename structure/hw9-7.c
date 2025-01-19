//結構指標
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
struct pclist
{
    char pcName[20];
    int year;
}prd[2] = {
        {"John",1990},
        {"Mary",1988}
};
void printinfo(struct pclist[]);
int main()
{
    for (int i = 0;i < 2;i++)
    {
        printf("%s 出生於 %d\n", prd[i].pcName, prd[i].year);
    }
    printinfo(prd);
    return 0;
}
void printinfo(struct pclist prd[])
{
    for (int i = 0;i < 2;i++)
    {
        prd[i].year++;
        printf("%s 出生於 %d\n", prd[i].pcName, prd[i].year);
    }
}
