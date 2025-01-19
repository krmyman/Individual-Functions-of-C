#include<stdio.h>
#include<stdlib.h>
int main(void)
{
    char ch;
    printf("請輸入一個字元:");
    ch = getchar();
    while(ch>=65 && ch<=122)
    {
    if(ch>=65 && ch<=90)
    {   printf("你輸入的字母是:");
        putchar(ch+32);
        printf("\n");
    }
    else if(ch>=97 && ch<=122)
    {
        printf("你輸入的字母是:");
        putchar(ch-32);
        printf("\n");
    }
    rewind(stdin);
    printf("請輸入一個字元:");
    ch=getchar();
    }
    printf("你輸入的不是英文字母\n");
    system("pause");
    return 0;
}