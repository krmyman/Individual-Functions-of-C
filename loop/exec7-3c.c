#include<stdio.h>
#include<stdlib.h>
int sum(int);
int main()
{
    int data;
    printf("輸入一個正整數值:");
    scanf("%d", &data);
    printf("總和:%d\n", sum(data));
    system("pause");
    return 0;
}
int  sum(int x)
{
    int total = 0;
    for (int i = 1;i <= x;i++)
        total += i;
    return total;
}