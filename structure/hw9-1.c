#include<stdio.h>
#include<stdlib.h>
struct data
{
    char cpu[20];
    char memory[20];
    char system[20];
    int  disk;
}data;
int main()
{
    printf("輸入CPU廠牌：");gets(data.cpu);
    printf("記憶體大小<G>：");gets(data.memory);
    printf("作業系統名稱：");gets(data.system);
    printf("硬碟大小<G>：");scanf("%d", &data.disk);
    printf("\n");
    printf("輸入CPU廠牌：%15s\n", data.cpu);
    printf("記憶體大小<G>：%12s G\n", data.memory);
    printf("作業系統名稱：%15s\n", data.system);
    printf("硬碟大小<G>：%15d G\n", data.disk);
    return 0;
}
