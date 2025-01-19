//費式數列
#include<stdio.h>
#include<stdlib.h>
int main()
{
    int data, dataArray[20] = { 1,1 }, sum = 0, run = 1;
    for (int i = 2;i <= 20;i++)
    {
        dataArray[i] = dataArray[i - 1] + dataArray[i - 2];
    }
    do
    {
        printf("輸入一個大於1的整數<輸入0離開程式>:");
        scanf("%d", &data);
        if (!(data))break;
        while (1)
        {
            printf("f%d = %d\n", run, dataArray[run - 1]);
            sum += dataArray[run - 1];
            run++;
            if (data <= sum)break;
        }
        printf("f%d = %d\n", run, dataArray[run - 1]);
        sum = 0;
        run = 1;
    } while (1);
    system("pause");
    return 0;
}