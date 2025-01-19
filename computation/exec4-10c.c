#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main(void)
{
    int x=0;
    printf("輸入一個數字：");
    scanf("%d",&x);
    if(x)printf("條件中是%d\n",x);
    printf("----------------\n");
    if(0)printf("條件中是0\n");
    if(1)printf("條件中是1\n");
    if(0.02)printf("條件中是0.02\n");
    if(-2)printf("條件中是-2\n");
    system("pause");
    return 0;
}