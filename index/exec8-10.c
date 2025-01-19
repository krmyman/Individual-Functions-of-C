#include<stdio.h>
#include<stdlib.h>
void add20(int*);
int main()
{
    int a = 10;
    printf("呼叫add20()前,a = %d\n", a);
    add20(&a);
    printf("呼叫add20()後,a = %d\n", a);
    system("pause");
    return 0;
}
void add20(int *ptr)
{
    *ptr+=20;
}