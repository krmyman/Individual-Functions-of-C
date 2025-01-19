//結構指標
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
struct pclist
{
    char pcName[20];
    char pcID[10];
    int sales[4];
    float fAve;
}prd = {"pc","p01",1234,2211,3213,4213};
void printinfo(struct pclist *);
int main()
{   
        for (int j = 0;j < 4;j++)
            prd.fAve += prd.sales[j];
        printinfo(&prd);
        prd.fAve =0;
        for (int j = 0;j < 4;j++)
            prd.fAve += prd.sales[j];
        printf("%s 的平均銷量為  %6.2f\n", prd.pcName, prd.fAve/4.0);
    return 0;

}
void printinfo (struct pclist *prd)
{
    printf("%s 的平均銷量為  %6.2f\n", prd->pcName, prd->fAve/4.0);
    strcpy(prd->pcName,"個人電腦");prd->sales[0] = 2000;
}
