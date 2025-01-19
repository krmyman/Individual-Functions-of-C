#include<stdio.h>
#include<stdlib.h>
int sum(int x)
{
    int total = 0;
    while (x >= 0)
    {
        total += x;
        x--;
    }
    return total;
}

int main()
{
    int data;
    printf("請輸入介於 10 到 50000 的數值 : ");
    scanf("%d", &data);
    while (data != 0)
    {
        printf("1+2+.....+%5d = %10d\n", data, sum(data));
        printf("請輸入介於 10 到 50000 的數值 : ");
        scanf("%d", &data);
    }
    system("pause");
    return 0;
}