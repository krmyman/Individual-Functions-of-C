//利用指標轉換字母大小寫
#include<stdio.h>
#include<stdlib.h>
void chang(char*);
int main()
{
    char toch, cdata, carray[100] = { '0' };
    int run = 0;
    printf("輸入一串英文：");
    while ((cdata = getchar()) != '\n')
    {
        carray[run] = cdata;
        toch = carray[run];
        chang(&toch);
        carray[run] = toch;
        run++;
    }
    for (int i = 0;i < run;i++)
    {
        printf("%c", carray[i]);
    }
    printf("\n");
    system("pause");
    return 0;
}
void chang(char* ptr)
{
    if (*ptr >= 65 && *ptr <= 90) *ptr += 32;//大轉小
    else if (*ptr >= 97 && *ptr <= 122) *ptr -= 32;//小轉大
}