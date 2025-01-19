#include<stdio.h>
#include<stdlib.h>
void sum(int x)
{
    int total = 0;
    for (int i = 1;i <= x;i++)
        total += i;
    printf("總和:%d\n", total);
}
int main()
{
    int data;
    printf("輸入一個正整數值:");
    scanf("%d", &data);
    sum(data);
    system("pause");
    return 0;
}