//遞迴技巧
#include<stdio.h>
#include<stdlib.h>
long sum(long n)
{
    int ret;
    if (n == 1) return 1;
    ret = n + sum(n - 1);
    return ret;
}
int main()
{
    int data;
    do
    {
        printf("計算1+2+3+...+n, 項目數n輸入小於等於0,就離開本程式\n");
        printf("請輸入n:");
        scanf("%d", &data);
        printf("總和 = %d\n", sum(data));
        printf("*************************************\n");
    } while (data >= 0);
    system("pause");
    return 0;
}