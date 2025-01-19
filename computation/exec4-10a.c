#include<stdio.h>
#include<stdlib.h>
int main(void)
{
    char input;
    printf("請輸入一個字元,男生請按<M或m>,女生請按<F或f>:");
    scanf("%c",&input);
    if(input == 'M' || input == 'm')
    {
        printf("你是男生\n");
        printf("程式結束\n");
    }
    else
    {
        printf("妳是女生\n");
        printf("程式結束\n");
    }
    system("pause");
    return 0;
}