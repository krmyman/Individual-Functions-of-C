#include <stdio.h>
#include <stdlib.h>
int main(void)
{
    int fifty=0,ten=0,five=0,one =0,data=0;
    printf("可輸入您的換幣金額：");
    scanf("%d",&data);
    fifty = data / 50;
    ten = data % 50 /10;
    five = data % 50 % 10 / 5;
    one = data % 50 % 10 % 5;
    printf("可兌換: 50 圓 %2d 個\n",fifty);
    printf("        10 圓 %2d 個\n",ten);
    printf("         5 圓 %2d 個\n",five);
    printf("         1 圓 %2d 個 \n",one);
    system("pause");
    return 0;
}