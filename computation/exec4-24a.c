#include<stdio.h>
#include<stdlib.h>

int mathx(int x)
{
    return 3*x+105;
}
int main(void)
{
    int data;
    printf("請輸入數字:");
    scanf("%d",&data);
    while(data!=0)
    {
        printf("mathx函式的回傳值:%d \n",mathx(data));
        printf("請輸入數字:");
        scanf("%d",&data);
    }
    system("pause");
    return 0;
}