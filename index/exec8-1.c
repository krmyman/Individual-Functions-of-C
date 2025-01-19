//指標
#include<stdio.h>
#include<stdlib.h>
int main()
{
    int num = 20, * ptr;
    ptr = &num;//a的位址
    printf("num = %d, &num = %p\n", num, &num);//%p輸出位址的引數
    printf("*ptr = %d, ptr = %p, &ptr = %p\n", *ptr, ptr, &ptr);
    system("pause");
    return 0;
}