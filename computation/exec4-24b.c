#include<stdio.h>
#include<stdlib.h>

int mathx(int x, int y)
{
    return 10 * x - 8 * y + 10;
}
int main(void)
{
    int datax, datay;
    printf("請輸入數字x:");
    scanf("%d", &datax);
    rewind(stdin);
    printf("請輸入數字y:");
    scanf("%d", &datay);
    while (mathx(datax, datay) > 0)
    {
        printf("mathx函式的回傳值:%d \n", mathx(datax, datay));
        printf("請輸入數字x:");
        scanf("%d", &datax);
        rewind(stdin);
        printf("請輸入數字y:");
        scanf("%d", &datay);
    }
    printf("mathx函式的回傳值:%d \n", mathx(datax, datay));
    system("pause");
    return 0;
}