#include<stdio.h>
#include<stdlib.h>
void Abc(int);
void Abc(int n)
{
    n++;
    printf("In the function Abc -- n=%d\n", n);
}
int main()
{
    int i = 10;
    printf("Example : call by value (傳值, 主程式中與函式中的參數沒有共用同一個位址)\n");
    printf("before call Abc function, in the main --- i=%d\n", i);
    Abc(i);
    printf("after call Abc function, in the main --- i=%d\n", i);
    system("pause");
    return 0;
}