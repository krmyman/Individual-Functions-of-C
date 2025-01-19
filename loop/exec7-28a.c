//遞迴技巧 等差
#include<stdio.h>
#include<stdlib.h>
long sum(long n, long a1, long d)
{
    int ret;
    if (n == 1) return a1;
    ret = sum(n - 1,a1,d)+a1+(n-1)*d;
    return ret;
}
int main()
{
    int data, a1, d;
    do
    {
        printf("計算等差數列,項目數n輸入小於等於0,就離開本程式\n");
        printf("請輸入項目數n:");
        scanf("%d", &data);
        if(data==0)break;
        printf("請輸入公差d:");
        scanf("%d", &d);
        printf("請輸入首相a1:");
        scanf("%d", &a1);
        printf("總和 = %d\n", sum(data,a1,d));
        printf("*************************************\n");
    } while (data > 0);
    system("pause");
    return 0;
}