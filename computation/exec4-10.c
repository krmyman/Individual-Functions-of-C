#include<stdio.h>
#include<stdlib.h>
int main(void)
{
    int num=0;
    printf("請輸入一個整數:");
    scanf("%d",&num);
    if(num)
    {
        printf("您輸入的整數大於0\n");
    }
    else
    printf("程式結束\n");
    system("pause");
    return 0;
}