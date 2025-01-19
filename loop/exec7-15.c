#include<stdio.h>
#include<stdlib.h>
void Abc(int []);
void Abc(int n[])
{
    n[0] = -1;
    n[1] = 1;
    printf("In the function Abc -- n[0]=%d\n", n[0]);
    printf("In the function Abc -- n[1]=%d\n", n[1]);
}
int main()
{
    int b[2] = { 3,4 };
    printf("Example : call by value (傳值, 主程式中與函式中的參數共用同一個位址)\n");
    printf("before call Abc function, in the main --- b[0]=%d\n", b[0]);
    printf("before call Abc function, in the main --- b[1]=%d\n", b[1]);
    Abc(b);
    printf("after call Abc function, in the main --- b[0]=%d\n", b[0]);
    printf("after call Abc function, in the main --- b[1]=%d\n", b[1]);
    system("pause");
    return 0;
}