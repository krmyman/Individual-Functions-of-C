#include <stdio.h>
#include<stdlib.h>
int main(void)
{
    int tea=0,coffee=0,count=0,total=0;
    printf("輸入購買茶的數量：");
    scanf("%d",&tea);
    rewind(stdin);
    printf("輸入購買咖啡的數量：");
    scanf("%d",&coffee);
    total = tea * 25 + coffee * 35 ;
    count = tea + coffee;
    if(count>20)
        total *= 0.85;
    printf("應付總價： %d\n",total);
    system("pause");
    return 0;
}