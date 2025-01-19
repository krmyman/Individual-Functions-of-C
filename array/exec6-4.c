#include<stdlib.h>
#include<stdio.h>
int main()
{
    int total = 0;
    for (int i = 1;i <= 100;i++)
    {
        total += i;
    }
    printf("1+2+...+100 = %d\n", total);
    system("pause");
    return 0;
}